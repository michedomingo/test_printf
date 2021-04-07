#include "holberton.h"
/**
 * print_char - prints a character
 * @args: list of arguments
 * Return: number of characters printed
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - prints a string
 * @args: list of arguments
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	int i;
	char *ptr = va_arg(args, char *);

	if (ptr == NULL)
		ptr = "(null)";

	for (i = 0; ptr[i] != '\0'; i++)
		_putchar(ptr[i]);

	return (i);
}
