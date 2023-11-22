
![](https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.holbertonschool.com%2F&psig=AOvVaw3Ia1OMGmh7p9vs-UATlfef&ust=1700750320685000&source=images&cd=vfe&opi=89978449&ved=0CBIQjRxqFwoTCMCWsejq14IDFQAAAAAdAAAAABAD)

# C - Printf
----------

![](https://img.freepik.com/vecteurs-libre/concept-collegues-pour-page-destination_23-2148329990.jpg?w=900&t=st=1700661500~exp=1700662100~hmac=85f896325c620f5721bd5a64d738c00122c01bf3b8de21945a54832c7f0ed092)

----------

## ➤ Description:

The _printf function emulates the standard C language function of the same name, responsible for printing format strings on screen. It takes as input an initial variable, a character string, and goes through each character one by one, then prints it.

When it encounters a format specifier (e.g. %s or %d), it extracts the corresponding data type from the arguments and prints the contents of the associated variable.

In the case of an undeclared format specifier, such as %T, the _printf function behaves intuitively by printing the specifier as is, preserving the function's flexibility to handle future directives.

----------

## ➤ Format types:
| Type     | Output                              | 
| -------- | ----------------------------------- |
| %c       | Print argument of character type    |
| %s       | Print argument of string type       |
| %i       | Print argument of type integer      |
| %%       | Prints a single %                   |
| %d       | Print a decimal (base 10) number    |

----------

## ➤ Examples:

String without type: ```bash _printf("Hello!");```
Output: ```bash Hello! ```

Caratere : ```bash _printf("%c\n", "A");```
Output: ```bash A ```

String: ```bash _printf("%s\n", "Hello Adrien!");```
Output: ```bash Hello Adrien! ```

Integer: ```bash _printf("%i\n", "92"); ```
Output: ```bash 92 ```

Decimal: ```bash _printf("%d\n", "2023"); ```
Output: ```bash 2023 ```

%: ```bash _printf("Imprimer un seul signe pourcent : %%\n"); ```
Output: ```bash Imprimer un seul signe pourcent : % ```

----------

## ➤ Files that make up the _printf:

* [1_function_printf.c](https://github.com/francois0002/holbertonschool-printf/blob/main/1_function_printf.c) : Contains the source code for the printf function.
* [2_replace_specifier.c](https://github.com/francois0002/holbertonschool-printf/blob/main/2_replace_specifier.c) : Replacing format specifiers in source code. Format specifiers, such as %s or %d.
* [3_print_all.c](https://github.com/francois0002/holbertonschool-printf/blob/main/3_print_all.c) : Print different types of data.
* [main.h](https://github.com/francois0002/holbertonschool-printf/blob/main/main.h) : Header file containing prototypes of functions used in source code. It is included in the rest of the files via the expression: #include "main.h".
* [_putchar.c](https://github.com/francois0002/holbertonschool-printf/blob/main/_putchar.c): 

Compilez le code en utilisant :
```bash gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c ```

----------

## ➤ Links:
MIT 
https://choosealicense.com/licenses/mit/#

----------

## ➤ Requirements:



----------

## ➤ Author:
- François Gosselin [Github](https://github.com/francois0002)
- Amandine Kemp [Github](https://github.com/amandinekemp)
