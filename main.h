#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchars(char c);
int _print_str(char *s);
int _strlen(char *s);

#endif
