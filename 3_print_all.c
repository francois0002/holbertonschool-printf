#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - imprime une chaine de caractere
 * @string: chaine de caractere
 * Return: affiche chaine de caractere
 */

void print_string(char *string)
{
	int index;

	for (index = 0 ; string[index] != '\0' ; index++)
	{
		_putchar(string[index]);

	}

}
