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
	Specifier c[] = {
		{"%c", _print_char}, {"%s", _print_str},
		{"%%", print_percent}, {"%d", _print_dec},
		{"%i", _print_int}, {"%b", print_bin},
		{"%u", _print_unsigned}, {"%o", _print_octal},
		{"%x", _print_hexa}, {"%X", _printf_alpha_hex}
	};

	va_list func;
	int i = 0, len = 0, var;

	va_start(func, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] == '\0')
	{
		var = 9;
		while (var >= 0)
		{
			if (c[var].id[0] == format[i] && c[var].id[1] == format[i + 1])
			{
				len += c[var].f(func);
				i += 2;
				break;
			}
			var++;
		}
		_putchars(format[i]);
		i++;
		len++;
	}
	va_end(func);
	return (len);
}
