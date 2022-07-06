#ifndef _function_pointers_
#define _function_pointers_

#include <stdio.h>
#include <stdlib.h>

char _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t, void (*action)(int));
int int_index(int *, int, int (*cmp)(int));

#endif
