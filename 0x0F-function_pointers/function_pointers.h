#ifndef C_FUNCTION_POINTERS_H
#define C_FUNCTION_POINTERS_H
#include <stddef.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif