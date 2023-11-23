#include "main.h"

/**
* print_string - Print a string
* @args_variadic: string specify in the variadic args in _printf function
* Return: affiche chaine de caractere
*/

int print_string(va_list args_variadic)
{
	char *string = va_arg(args_variadic, char*);

	int index = 0;
	int length_function = 0;



	for (index = 0 ;  string[index] != '\0' ; index++)
	{
		length_function += _putchar(string[index]);
	}
	return (length_function);
}


/**
* print_char - Print a character
* @args_variadic: Character specify in the variadic args in _printf function
* Return: 1 because one character
*/

int print_char(va_list args_variadic)
{
	char character = va_arg(args_variadic, int);
	int length_function = 0;

	{
		length_function += _putchar(character);
	}
	return (1);
}

/**
* print_percentage - Print a percentage
* @args_variadic: Character specify in the variadic args in _printf function
* Return: 1 because one character
*/

int print_percentage(va_list args_variadic)
{
	(void)args_variadic;
	 _putchar('%');

	return (1);
}