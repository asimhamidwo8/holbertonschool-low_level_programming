#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* function prototypes */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
