#include "main.h"

/**
 * _printf - function to print according to format specifiers
 * @format: a string of characters
 * @...: variable args
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    int len = 0, i = 0;
    va_list m;
    va_start(m, format);

    while (format[i])
    {
        if (format[i] != '%')
        {
            len += _putchars(format[i]);
        }
        else
        {
            i++;
            if (format[i] == 'c' || format[i] == '%')
            {
                len += _putchars(va_arg(m, int));
            }
            else if (format[i] == 's')
            {
                _print_str(va_arg(m, char *));
            }
            else if (format[i] == 'S')
            {
                _print_string2(m);
            }
            else if (format[i] == 'i' || format[i] == 'd')
            {
                len += _print_int(m);
            }
        }
        i++;
    }
    va_end(m);
    return len;
}
