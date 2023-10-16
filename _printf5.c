#include "main.h"

/**
 * _print_decimal - function that prints integer
 * @m: argument to print
 * Return: number of chars printed
 */

int _print_decimal(va_list m)
{
        int p = va_arg(m, int);
        int n, l = 0;
        int lst = p % 10, digit, e = 1;

        p = p / 10;
        n = p;
        if (lst < 0)
        {
                _putchars('-');
                n = -n;
                p = -p;
                lst = -lst;
                l++;
        }
        if (n > 0)
        {
                while (n / 10 != 0)
                {
                        e = e * 10;
                        n = n / 10;
                }
                n = p;
                while (e > 0)
                {
                        digit = n / e;
                        _putchars(digit + '0');
                        n = n - (digit * e);
                        e = e / 10;
                        l++
                }
        }
        _putchars(lst + '0');
        return (l);
}
