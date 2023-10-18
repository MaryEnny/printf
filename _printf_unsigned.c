#include "main.h"
/**
  * _print_unsigned - prinnts an unsigned integer
  *
  * @m: argument to print
  * Return: number of chars printed
  */

int _print_unsigned(va_list m)
{
	int p = va_arg(m, int);
	int n = p, l = 0;
	int digit, e = 1;

	if (p < 0)
	{
		_putchars('-');
		p = -p;
		l++;
	}
	if (p == 0)
	{
		_putchars('0');
		return (1);
	}
	while (n > 0)
	{
		e *= 10;
		n /= 10;
	}

	while (e > 1)
	{
		digit = p / e;
		_putchars(digit + '0');
		p -= (digit * e);
		e /= 10;
		l++;
	}

	_putchars(p + '0');
	l++;

	return (l);
}
