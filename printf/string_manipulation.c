#include "holberton.h"
/**
 * rot13 - rotates the characters 13 places
 * @args: passed string arguments
 * Return: string rotated
 */
int rot13(va_list args)
{
	char *original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *translate = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *new;
	int i, j;

	new = va_arg(args, char *);
	if (new == NULL)
		return (-1);
	for (i = 0; new[i] != '\0'; i++)
	{
		for (j = 0; original[j]; j++)
		{
			if (new[i] == original[j])
			{
				_putchar(translate[j]);
				break;
			}
		}
	}

	return (i);
}

/**
 * print_rev - prints string once its been reversed
 * @args: args passed from va_list
 * Return: length of string passed and printed
 */
int print_rev(va_list args)
{
	int len;
	char *src;
	char *dest;

	src = va_arg(args, char *);
	if (!src)
		return (-1);

	dest = rev_string(src);
	if (!dest)
		return (-1);
	len = 0;
	for (len = 0; dest[len] != '\0'; len++)
		_putchar(dest[len]);
	free(dest);
	return (len);
}
