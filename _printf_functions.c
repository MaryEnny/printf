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
    Specifier c[] = {
        {"%c", _print_char}, 
	{"%s", _print_str},
        {"%%", print_percent}, 
	{"%d", _print_dec},
        {"%i", _print_int}, 
	{"%b", print_bin},
        {"%u", _print_unsigned}, 
	{"%o", _print_octal},
        {"%x", _print_hexa}, 
	{"%X", _printf_alpha_hex},
	{"%r", _print_undef}
    };

    va_list func;
    char buff[BUFFER_SIZE];
    int i = 0, len = 0, var, buf_id = 0;

    va_start(func, format);
    if (format == NULL)
        return (-1);

    while (format[i])
    {
        if (format[i] == '%')
        {
            var = 0;
            while (var < 10)
            {
                if (c[var].id[0] == format[i] && c[var].id[1] == format[i + 1])
                {
                    if (buf_id >= BUFFER_SIZE)
                    {
                        write(1, buff, buf_id);
                        buf_id = 0;
                    }
		    len += c[var].f(func);
		    i += 2;
                    break;
                }
                var++;
            }

            if (var == 10)
            {
                if (buf_id >= BUFFER_SIZE)
                {
                    write(1, buff, buf_id);
                    buf_id = 0;
                }
                buff[buf_id++] = '%'; /* Add '%' to the buffer*/
                i++;
                len++;
            }
        }
        else
        {
            if (buf_id >= BUFFER_SIZE)
            {
                write(1, buff, buf_id);
                buf_id = 0;
            }
            buff[buf_id++] = format[i];
            i++;
            len++;
        }
    }

    if (buf_id > 0)
    {
        write(1, buff, buf_id);
        len += buf_id;
    }

    va_end(func);
    return len;
}
