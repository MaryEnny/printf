#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchars(char c);
int _print_str(char *s);
int _strlen(char *s);
int _print_int(va_list m0);
int _print_dec(va_list m);
int print_percent(void);
int print_bin(va_list base);
int _print_unsigned(va_list m);
int _print_octal(va_list oct);
int _print_hexa(va_list hex);
int _printf_alpha_hex(va_list HEX);
int _print_hexaext(unsigned int x);
int _print_string2(va_list arg);

#endif
