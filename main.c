#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 * @_printf: simplified version of the printf function
 *
 * Return: Always 0
 */

int main(void)
{
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
<<<<<<< HEAD
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("%b\n", 98);
=======
>>>>>>> 9feb89bf21023502493791bd5334ea0dabe08cc5
    return (0);
}
