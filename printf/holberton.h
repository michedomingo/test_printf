#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>

/**
 * struct specifier_functions - struct to choose function based on specifier
 * @sym: format specifier
 * @fptr: pointer to function to print
 */
struct specifier_functions
{
	char *sym;
	int (*fptr)(va_list);
};
typedef struct specifier_functions print_t;

/*functions from specifiers list*/
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_octal(va_list args);
int print_unsigned(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_rev(va_list args);
int rot13(va_list args);

/*main functions*/
int _printf(const char *format, ...);
int get_function(const char *fmt, print_t spec_list[], va_list args);
int _putchar(char c);

/*helper functions */
unsigned int lenbase(unsigned int num, int base);
char *rev_string(char *s);
void _putbase(char *str);
int hexcheck(int num, char hex);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif  /* _HOLBERTON_H */
