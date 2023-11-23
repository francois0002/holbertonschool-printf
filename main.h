#ifndef __MAIN_H__
#define __MAIN_H__
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int replace_specifier(const char *format, int index, va_list args_variadic);
int print_string(va_list args_variadic);
int print_char(va_list args_variadic);
int print_percentage(va_list args_variadic);
int print_decimal(va_list args_variadic);

/**
 * struct compare_specifier - compare the  specifier include in the
 * main printf function in order to apply a print function associated
 * @identifier: conversions specifiers that will be compare : "c, s, %, d, i"
 * @ptr_on_functions: functions that will print the args variadic
 * whith the good format
 */

typedef struct compare_specifier
{
	char *identifier;
	int (*ptr_on_functions)(va_list);
} compare_specifier;

#endif
