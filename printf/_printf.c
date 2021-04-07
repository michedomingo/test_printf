#include "holberton.h"

/**
 * _printf - custom printf function
 * @format: string we need to parse, format and print
 * Return: character count of printed characters
 */
int _printf(const char *format, ...)
{
	int char_count;
	va_list args;

	print_t spec_list[] = {
		{"R", rot13},
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"r", print_rev},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(args, format);
	char_count = get_function(format, spec_list, args);
	va_end(args);

	return (char_count);
}
