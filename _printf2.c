#include "main.h"

/**
 * _print_str - function that prints a string
 * @s - argument
 * Return: the lenght of the string
 */

int _print_str(va_list s)
{
	char *m;
	int i;
	int len;

	m = va_arg(s, char *);
	if (m == NULL)
	{
		m = "(nil)";
		len = _strlen(m);
		for (i = 0; i < len; i++)
			_putchar(m[i]);
		return (len)
	}
	else
	{
		len = _strlen(m);
		for (i = 0; i < len; i++)
			_putchar(m[i]);
		return (len);
	}
}
