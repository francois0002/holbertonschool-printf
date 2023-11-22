#include "main.h"

/**
 * print_string - imprime une chaine de caractere
 * @args_variadic: chaine de caractere
 * Return: affiche chaine de caractere
 */

void print_string(va_list args_variadic)
{
	char *string = va_arg(args_variadic, char*);
	int index = 0;



	for (index = 0 ;  string[index] != '\0' ; index++)
	{
		_putchar(string[index]);

	}

}
