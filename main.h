#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * struct id - Struct id
  *
  * @id: the identifier
  * @f: function associated
  */
typedef struct
{
	const char *id;
	int (*f)(va_list);
} Specifier;

int _printf(const char *format, ...);
int _putchars(char c);
int _print_str(va_list st);
int _strlen(char *s);
int _print_int(va_list m);
int _print_dec(va_list m);
int print_percent(va_list per);
int print_bin(va_list base);
int _print_unsigned(va_list m);
int _print_octal(va_list oct);
int _print_hexa(va_list hex);
int _printf_alpha_hex(va_list HEX);
int _print_char(va_list p);
/*int _print_string2(va_list arg);*/
int _print_undef(va_list ken);
#endif
