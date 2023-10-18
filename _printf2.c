#include "main.h"

/**
 * _print_str - function that prints a string
 * @st: argument
 * Return: the lenght of the string
 */

int _print_str(va_list st)
{
	int i;
	int len;
	char *str;

	str = va_arg(st, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchars(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchars(str[i]);
		return (len);
	}
}
