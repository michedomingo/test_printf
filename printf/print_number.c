#include "holberton.h"

/**
 * print_int - prints typical int to stdout
 * @args: arg from arglist of printf
 * Return: number of characters printed by this function
 */
int print_int(va_list args)
{
	int numchars, num, div;
	unsigned int unsigned_num;

	div = 1;
	num = va_arg(args, int);
	numchars = 0;

	if (num < 0)
	{
		numchars += _putchar('-');
		unsigned_num = num * -1;
	}
	else
		unsigned_num = num;

	while (unsigned_num / div > 9)
		div = div * 10;

	while (div != 0)
	{
		numchars += _putchar(unsigned_num / div + '0');
		unsigned_num %= div;
		div = div / 10;
	}
	return (numchars);
}
/**
 * print_unsigned - prints unsigned ints
 * @args: arguments being passed
 * Return: number of characters printed by this function
 */
int print_unsigned(va_list args)
{
	int numchars = 0, num, div;
	unsigned int unsigned_num;

	div = 1;
	num = va_arg(args, int);

	unsigned_num = num;

	while (unsigned_num / div > 9)
		div = div * 10;

	while (div != 0)
	{
		numchars += _putchar(unsigned_num / div + '0');
		unsigned_num %= div;
		div = div / 10;
	}
	return (numchars);
}
