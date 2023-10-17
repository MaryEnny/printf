#include "main.h"

/**
 * _print_string2 - function to  prints the string.
 * @arg: argument
 * Return: character lenght
 */

int _print_string2(va_list arg)

{
	char *a;
	int h, lenght = 0;
	int v;

	a = va_arg(arg, char *);
	if (a == NULL)
		a = "(null)";
	for (h = 0; a[h] != '\0'; h++)
	{
		if (a[h] < 32 || a[h] >= 127)
		{
			_putchars('\\');
			_putchars('x');
			lenght = lenght + 2;
			v = a[h];
			if (v < 16)
			{
				_putchars('0');
				lenght++;
			}
			lenght = lenght + _print_hexaext(v);
		}
		else
		{
			_putchars(a[h]);
			lenght++;
		}
	}
	return (lenght);
}
