#include "main.h"

/**
  * _printf_alpha_hex - prints a hex in capital letters
  * @HEX: arguments to be passed
  *
  * Return: characters to be printed
  */

int _printf_alpha_hex(va_list HEX)
{
	int i, call = 0, *arr;
	unsigned int num = va_arg(HEX, unsigned int);
	unsigned int dep = num;

	while (num / 16 != 0)
	{
		num /= 16;
		call++;
	}
	call++;
	arr = malloc(sizeof(int) * call);
	if (!arr)
		return (-1);
	for (i = 0; i < call; i++)
	{
		arr[i] = dep % 16;
		dep /= 16;
	}
	for (i = call - 1; i >= 0; i--)
	{
		if (arr[i] > 0)
			arr[i] += 7;
		_putchars(arr[i] + '0');
	}
	free(arr);
	return (call);
}
