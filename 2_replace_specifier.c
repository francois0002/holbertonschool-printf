#include "main.h"

/**
* replace_specifier - Entry point
* Description: replace the conversion specifier by the variadic
* argument associated
* @format: String of character
* @index: counter initialize in printfmain

*/

void replace_specifier(const char *format, int index, va_list args_variadic)
{
	int index_struct;

	compare_specifier tab_struc[] = {
		{"s", print_string},
		{NULL, NULL}
	};

	for (index_struct = 0 ; tab_struc[index_struct].identifier != NULL ; index_struct++)
	{
		if (format[index + 1] == tab_struc[index_struct].identifier[0])
		{
			tab_struc[index_struct].ptr_sur_print_all(args_variadic);
			return;
		}
	}
}
