#include "main.h"

/**
 * _print_str - function that prints a string
 * @s: argument
 * Return: the lenght of the string
 */

int _print_str(char *s)
{
	int i;
	int len;
	len = _strlen(s);
	for (i = 0; i < len; i++)
		_putchars(s[i]);
	return (len);
}
