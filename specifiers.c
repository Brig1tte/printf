#include "main.h"

/**
 *  get_specifier - Links format specifier to its function
 *
 *  @format: Format character
 *
 *  Return: Type of specifier
 */


int (*get_specifier(char format))(va_list)
{
	int a;

	spec_type type[] = {
		{"i", get_int},
		{"d", get_int},
		{"u", get_unsigned},
		{"c", get_char},
		{"s", get_string},
		{"r", get_reverse},
		{"x", get_hex},
		{"X", get_heX},
		{"b", get_binary},
		{"o", get_octal},
		{"R", get_rot13},
		{"%", get_percent},
		{NULL, NULL}
	};

	for (a = 0; type[a].spec != NULL; a++)
	{
		if (format == *type[a].spec)
		{
		return (type[a].f);
		}
	}
	return (NULL);
}
