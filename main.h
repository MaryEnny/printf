#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list p);
int _print_str(va_list s);
int _strlen(char *s);
int _strlenc(const char *s);
int _print_percentage(void);

#endif
