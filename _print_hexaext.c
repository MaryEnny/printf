#include "main.h"

/**
  * _print_hexaext - prints a number in base 16
  * @hex: arguments to be printed
  *
  * Return: number of characters
  */
int _print_hexaext(unsigned int num)
{
	int i, call = 0;
	int *arr;
	unsigned int dep = num;

	while (num / 16 != 0)
	{
		num /= 16;
		call++;
	}
	call++;
	arr = malloc(sizeof(int) * call);
	if (arr == NULL)
		return (-1);

	for (i = 0; i < call; i++)
	{
		arr[i] = dep % 16;
		dep /= 16;
	}

	for (i = call - 1; i >= 0; i--)
	{
		if (arr[i] > 0)
			arr[i] += 39;
		_putchars(arr[i] + '0');
	}
	free(arr);
	return (call);
}
