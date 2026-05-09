#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * update_existing_key - updates value if key exists
 * @node: pointer to list
 * @key: key
 * @value: new value
 * Return: 1 if updated, 0 otherwise
 */
static int update_existing_key(hash_node_t *node,
	const char *key, char *value)
{
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = value;
			return (1);
		}
		node = node->next;
	}
	return (0);
}

/**
 * create_node - creates a new node
 * @key: key
 * @value: value
 * Return: pointer to node or NULL
 */
static hash_node_t *create_node(const char *key, char *value)
{
	hash_node_t *node;
	char *key_copy;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);

	key_copy = strdup(key);
	if (key_copy == NULL)
	{
		free(node);
		return (NULL);
	}

	node->key = key_copy;
	node->value = value;
	node->next = NULL;

	return (node);
}

/**
 * hash_table_set - adds or updates an element
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (update_existing_key(ht->array[index], key, value_copy))
		return (1);

	node = create_node(key, value_copy);
	if (node == NULL)
	{
		free(value_copy);
		return (0);
	}

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
