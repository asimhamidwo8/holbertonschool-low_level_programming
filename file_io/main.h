#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int append_text_to_file(const char *filename, char *text_content);

#endif
