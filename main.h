#ifndef __MAIN_H__
#define __MAIN_H__
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);


/**
 * struct compare_specifier - compare the  specifier include in the
 * main printf function in order to apply a print function associated
 * @identifier: conversions specifiers that will be compare : "c, s, %, d, i"
 * @ptr_sur_print_all: functions that will print the args variadic
 * whith the good format
 */

typedef struct compare_specifier
{
	char *identifier;
	void (*ptr_sur_print_all)(va_list args_variadic);
} compare_specifier;

#endif
