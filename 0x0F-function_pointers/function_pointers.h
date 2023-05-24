#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
