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
	va_list m;
	char *str = va_arg(m, char *);
	int c = va_arg(m, int);
	va_start(m, format);
	
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchars(format[i]);
			len++;
		}
		else
		{
			format++;
			if (format[i] == 'c')
			{
				_putchars(c);
				len++;
			}
			else if (format[i] == 's')
			{
				if (str == NULL)
					str = "(null)";
				while (str[j])
				{
					_putchars(str[j]);
					str++;
					len++;
				}
			}
			else if (format[i] == '%')
			{
				_putchars('%');
				len++;
			}
			else
			{
				_putchars('%');
				_putchars(format[i]);
				len += 2;
			}
		}
		format++;
	}
	va_end(m);
	return len;
}
