#include "main.h"

/**
  * _printf_undef - prints an unknown value
  * @ken: variable arguments
  *
  * Return: nalue printed
  */
int _print_undef(va_list ken)
{
	char *str = va_arg(ken, char *), *won;
	int len = 0, i;

	if (!str)
	{
		len =  _strlen(str);
		for (i = 0; i < len; i++)
		{
			_putchars(str[i]);
		}
	}
	else
	{
		won = "(null)";
		len = _strlen(won);
		for (i = 0; i < len; i++)
		{
			_putchars(won[i]);
		}
	}
	return len;
}
