#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int binary_to_uint(const char *b);
int stlen(const char *str);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
unsigned int set_bits(unsigned long int i);
int get_endianness(void);
int _putchar(char c);

#endif /* MAIN_H */
