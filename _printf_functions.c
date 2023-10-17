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
	int len = 0, i = 0;
	va_list m;
	va_start(m, format);
	
	while (format[i])
	{
		if (format[i] != '%')
			len += _putchars(format[i]);
		else
		{
			format++;
			if (format[i] == 'c'|| format[i] == '%')
				len += _putchars(va_arg(m, int));
			else if (format[i] == 's')
				_print_str(va_arg(m, char *));
			else if (format[i] == 'S')
				_print_string2(va_arg(m, char *));
			else if (format[i] == 'i')
				 _print_int(va_arg(m, int));
			else if (format[i] == 'd')
				 _print_dec(va_arg(m, int));
		}
		format++;
	}
	va_end(m);
	return len;
}
