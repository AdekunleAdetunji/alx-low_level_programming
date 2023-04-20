#ifndef MAIN_H
#define MAIN_H
void array_iterator(int *, size_t size, void (*action)(int));
void print_name(char *, void (*f)(char *));
int int_index(int *, size_t size, int (*cmp)(int));
#endif
