#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
* replace_specifier - Entry point
* Description: replace the conversion specifier by the variadic
* argument associated
* @format: String of character
* @index: counter initialize in printfmain
* Return:  number of character
*/

int replace_specifier(char *format, int index)
{
	int index_struct;

	compare_specifier tab_struc[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percentage},
		{NULL, NULL}
	};

	for (index_struct = 0 ; tab_struc[index_struct].identifier != NULL ; index_struct)
	{
		if (format[index + 1] == tab_struc[index_struct].identifier)
		{
			tab_struc[index_struct].ptr_sur_print_all;
		}
	}
}
