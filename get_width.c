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
	int curr_i;
	int width = 0;

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			width *= 10;
			width += format[curr_i] - '0';
		}
		else
			break;
	}
	*i = curr_i - 1;
	return (width);
}