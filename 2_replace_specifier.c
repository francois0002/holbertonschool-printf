#include "main.h"

/**
* replace_specifier - Entry point
* Description: replace the conversion specifier by the variadic
* argument associated
* @format: String of character
* @index: counter initialize in printfmain
* @args_variadic: variable that will be replace instead of the specifier
* Return: number of character
*/

int replace_specifier(const char *format, int index, va_list args_variadic)
{
	int index_struct;
	int length_function = 0;
	char specifier = format[index + 1];

	compare_specifier tab_struc[] = {
	{"s", print_string},
	{"c", print_char},
	{"%", print_percentage},
	{"d", print_decimal},
	{"i", print_decimal},
	{NULL, NULL}
	};

	/* Brownse tab to find the specifier and push the function associated */

	for (index_struct = 0 ; tab_struc[index_struct].identifier != NULL
	; index_struct++)
	{
		if (specifier == tab_struc[index_struct].identifier[0])
		{
			length_function += tab_struc[index_struct].ptr_on_functions(args_variadic);
		}
	}

	/* Print % and the next character if specifier is not found */
	if (length_function == 0)
	{
		length_function = _putchar('%');
		length_function = _putchar(specifier);
	}

	return (length_function);

}
