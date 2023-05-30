#include "main.h"

/**
 * get_width - Calculaes the width for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed
 * @list: List of arguments
 *
 * Return: Width
 */
int get_width(const char *format, int *i, va_list list)
{
	int curr_a;
	int width = 0;

	for (curr_i = *a + 1; format[curr_a] != '\0'; curr_a++)
	{
		if (is_digit(format[curr_a]))
		{
			width *= 10;
			width += format[curr_a] - '0';
		}
		else
			break;
	}
	*i = curr_a - 1;
	return (width);
}
