#include "holberton.h"

/**
 * _memcpy - copy from mem area src to dest for n bytes
 * @dest: destination area
 * @src: src area
 * @n: bytes
 * Return: dest altered
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*(dest + n) = *(src + n);
	}
	return (dest);
}
/**
 * _putbase - putchar helper for base conversions
 * @str: string passed
 */
void _putbase(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
/**
 * lenbase - gets length of base passed
 * @num: num processed
 * @base: base of number being porcessed
 * Return: length of number passed
 */
unsigned int lenbase(unsigned int num, int base)
{
	unsigned int i;

	i = 0;
	while (num > 0)
	{
		num = num / base;
		i++;
	}
	return (i);
}
/**
 * hexcheck - sets upper or lower case for hex functions
 * @num: number passed
 * @hex: hex specifier passed
 * Return: hex onesplace value
 */
int hexcheck(int num, char hex)
{
	char *lowerhex = "abcdef";
	char *upperhex = "ABCDEF";

	num -= 10;
	if (hex == 'x')
		return (lowerhex[num]);
	else
		return (upperhex[num]);

	return (0);
}

/**
 * rev_string - reverses a string in place
 * @s: string passed
 * Return: string reversed in place
 */
char *rev_string(char *s)
{
	char *end;
	char tmp;
	int len, i;

	for (len = 0; s[len] != '\0'; len++)
		;

	end = malloc(sizeof(char) * len + 1);
	if (end == NULL)
		return (NULL);

	_memcpy(end, s, len);
	for (i = 0; i < len; i++, len--)
	{
		tmp = end[len - 1];
		end[len - 1] = end[i];
		end[i] = tmp;
	}
	return (end);
}
