#include "holberton.h"

/**
 * get_function - finds function that we need
 * @fmt: format string passed
 * @spec_list: list of format structs we are parsing through
 * @args: arguments passed in _printf function call
 * Return: number of arguments called
 */
int get_function(const char *fmt, print_t spec_list[], va_list args)
{
	int i, j, ret_val, numchars;

	numchars = 0;

	for (i = 0; fmt[i] != '\0'; i++)
	{
		if (fmt[i] == '%')
		{
			for (j = 0; spec_list[j].sym != NULL; j++)
			{
				if (fmt[i + 1] == spec_list[j].sym[0])
				{
					ret_val = spec_list[j].fptr(args);
					if (ret_val == -1)
						return (-1);
					numchars += ret_val;
					break;
				}
			}
			if (spec_list[j].sym == NULL && fmt[i + 1] == ' ')
			{
				if (fmt[i + 1] != '\0')
				{
					_putchar(fmt[i]);
					_putchar(fmt[i + 1]);
					numchars += 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
			_putchar(fmt[i]);
			numchars++;
		}
	}
	return (numchars);
}
