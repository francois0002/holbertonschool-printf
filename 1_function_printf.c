#include "main.h"

/**
* _printf- Entry point
* Description: print a string of characters with some directives
* @format : string of characters with optional conversion specify
* which will be replaced by the arguments variadic indicated
* Return: Number of characters printed
*/


int _printf(const char *format, ...)
{
int index;

va_list args_variadic;
va_start(args_variadic, format);

for (index = 0 ; format[index] != '\0' ; index++)
{
	if (format[index] == '%')
	{
		replace_specifier(format, index, args_variadic);
	}
_putchar(format[index]);
}
va_end(args_variadic);
return (0);
}
