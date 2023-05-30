#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - Function to produce output according to format
 * @format: character string
 *
 * Return: number of charcters printed
 *   Excluding the null byte used to end output to strings
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')
				break;

			if (*format == 'c')
			{
				int c = va_arg(args, int);

				_putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);

				fputs(s, stdout);
				count = count + strlen(s);
			}
			else if (*format == '%')
				_putchar('%');
				count++;
			else
				_putchar(*format);
				count++;
			format++;
		}
		va_end(args);
		return (count);
	}
}
