#include "main.h"

/**
 * _print_char - function that prints a char
 * @p: parameter
 * Return: 0
 */

int _print_char(va_list p)
{
	char m;

	m = va_arg(p, int);
	_putchars(m);
	return (0);
}
