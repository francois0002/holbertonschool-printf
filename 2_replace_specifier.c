#include "main.h"

/**
* replace_specifier - Entry point
* Description: replace the conversion specifier by the variadic
* argument associated
* @format: String of character
* @index: counter initialize in printfmain

*/

int replace_specifier(const char *format, int index, va_list args_variadic)
{
	int index_struct;
    int length_function = 0;

	compare_specifier tab_struc[] = {
		{"s", print_string},
        {"c", print_char},
        {"%", print_percentage},
		{NULL, NULL}
	};

	for (index_struct = 0 ; tab_struc[index_struct].identifier != NULL ; index_struct++)
	{
		if (format[index + 1] == tab_struc[index_struct].identifier[0])
		{
			length_function += tab_struc[index_struct].ptr_on_functions(args_variadic);
		}
	}
    return (length_function);
}