#include "main.h"

/**
* print_string - print a string
* @args_variadic: string specify in the variadic args in _printf function
* Return: number of character in the string
*/

int print_string(va_list args_variadic)
{
	char *string = va_arg(args_variadic, char*);

	int index = 0;

	int length_function = 0;

	if (string == NULL)
	{
		string = "(null)";
	}

	for (index = 0 ;  string[index] != '\0' ; index++)
	{
		length_function += _putchar(string[index]);
	}
	return (length_function);
}


/**
* print_char - print a character
* @args_variadic: character specify in the variadic args in _printf function
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
* print_percentage - print a percentage
* @args_variadic: character specify in the variadic args in _printf function
* Return: 1 because one character
*/

int print_percentage(va_list args_variadic)
{
	(void)args_variadic;
	 _putchar('%');

	return (1);
}


/**
* print_decimal - print a integer
* @args_variadic: integer specify in the variadic args in _printf function
* Return: number of integer
*/

int print_decimal(va_list args_variadic)
{


	long int numbers = va_arg(args_variadic, int);
	int length_function = 0;
	int index_decimal = 1;
	int number_tmp;


	if (numbers < 0)
	{
		length_function += _putchar('-');
		numbers = numbers * (-1);
	}

	if (numbers < 10)
	{
		return (length_function += _putchar(numbers + '0'));
	}

	number_tmp = numbers;
	/*calcul of factor position of digit */
	while (number_tmp > 9)
	{
		index_decimal = index_decimal * 10;
		number_tmp = number_tmp / 10;
	}

	/*extracting each digit and writte it */
	while (index_decimal >= 1)
	{
		length_function += _putchar(((numbers / index_decimal) % 10) + '0');
		index_decimal = index_decimal / 10;
	}
	return (length_function);
}
