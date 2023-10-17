#include "main.h"

/**
  * _print_octal - prints an octal value
  * @oct: arguments to be printed
  *
  * Return: number of characters
  */
int _print_octal(va_list oct)
{
	int i, call = 0, *arr;
	unsigned int num = va_arg(oct, unsigned int);
	unsigned int dep = num;

	while (num / 8 != 0)
	{
		num /= 8;
		call++;
	}
	call++;
	arr = malloc(sizeof(int) * call);
	if (arr == NULL)
	{
		return (-1);
	}
	for (i = 0; i < call; i++)
	{
		arr[i] = dep % 8;
		dep /= 8;
	}
	for (i = call - 1; i >= 0; i--)
		_putchars(arr[i] + '0');
	free(arr);
	return (call);
}
