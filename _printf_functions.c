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
	int len = 0;
	va_list m;
	int i = 0;
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
			if (*format == 'c')
			{
				char c = va_arg(m, int);
				putchar(c);
				len++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(m, char *);
				if (str == NULL)
					str = "(null)";
				while (*str)
				{
					putchar(*str);
					str++;
					len++;
				}
			}
			else if (*format == '%')
			{
				putchar('%');
				len++;
			}
			else
			{
				putchar('%');
				putchar(*format);
				len += 2;
			}
		}
		format++;
	}
	va_end(m);
	return len;
}
