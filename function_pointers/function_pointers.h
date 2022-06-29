#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
void print_name(char *name, void (*f)(char *));
void _putchar(char);
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
