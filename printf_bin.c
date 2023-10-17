#include "main.h"

/**
  * print_bin - prints numbers in base 2
  * @base: arguments to print
  *
  * Return: number of characters printed
  */
int print_bin(va_list base)
{
	int count = 0, d = 0;
	int i, bit = 1, store;
	unsigned int num = va_arg(base, unsigned int), p;

	for (i = 0; i < 32; i++)
	{
		p = ((bit << (32 - i)) & num);
		if (p >> (31 - i))
			count = 1;
		if (count)
		{
			store = p >> (31 - i);
			_putchars(store + '0');
			d++;
		}

	}
	if (d == 0)
	{
		d++;
		_putchars('0');
	}
	return (d);
}
