#include "main.h"

/**
 * _printf - function to print according to format specifiers
 * @format: a string of characters
 * @...: variable args
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int len = 0, i = 0, j = 0;
	char *str = va_arg(m, char *), c = va_arg(m, int);
	va_list m;
	va_start(m, format);
	
	while (format[i])
	{
		if ([i]format != '%')
		{
			putchar(format[i]);
			len++;
		}
		else
		{
			format++;
			if (format[i] == 'c')
			{
				putchar(c);
				len++;
			}
			else if (format[i] == 's')
			{
				if (str == NULL)
					str = "(null)";
				while (str[j])
				{
					putchar(str[j]);
					str++;
					len++;
				}
			}
			else if (format[i] == '%')
			{
				putchar('%');
				len++;
			}
			else
			{
				putchar('%');
				putchar(format[i]);
				len += 2;
			}
		}
		format++;
	}
	va_end(m);
	return len;
}
