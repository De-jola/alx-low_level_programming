#include <stddef.h>
#ifndef HEADERGUARD
#define HEADERGUARD
void print_name(char *, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
void print_elem(int elem);
#endif
