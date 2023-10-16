#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchars(char c);
int _print_char(va_list p);
int _print_str(va_list s);
int _strlen(char *s);
int _strlenc(const char *s);
int _print_percentage(void);
<<<<<<< HEAD
int _print_integer(va_list m);
int _print_decimal(va_list m);
int _print_int(va_list n);
int _print_dec(va_list d);
int _putchars(char c);
=======
>>>>>>> 9feb89bf21023502493791bd5334ea0dabe08cc5

#endif
