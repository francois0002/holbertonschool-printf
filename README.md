
![Holberton](https://cdn.jobijoba.com/files/smartforum/mb_mairie_roubaix/business_directory/78/780cc0af-81ad-4a85-8290-6cc3fe51f1be.png)

# C - Printf
----------

![Duo](https://img.freepik.com/vecteurs-libre/concept-collegues-pour-page-destination_23-2148329990.jpg?w=900&t=st=1700661500~exp=1700662100~hmac=85f896325c620f5721bd5a64d738c00122c01bf3b8de21945a54832c7f0ed092)

----------

## Menu

- [➤ Description](https://github.com/francois0002/holbertonschool-printf#-description)
- [➤ Format types](https://github.com/francois0002/holbertonschool-printf#-format-types)
- [➤ Examples](https://github.com/francois0002/holbertonschool-printf#-examples)
- [➤ Files that make up the _printf](https://github.com/francois0002/holbertonschool-printf#-files-that-make-up-the-_printf)
- [➤ Requirements](https://github.com/francois0002/holbertonschool-printf#-requirements)
- [➤ Author](https://github.com/francois0002/holbertonschool-printf#-author)
- [➤ License](https://github.com/francois0002/holbertonschool-printf#-license)

----------

## ➤ Description:

The '_printf' function emulates the standard C language function of the same name, responsible for printing format strings on screen. It takes as input an initial variable, a character string, and goes through each character one by one, then prints it.

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

* String without type: ```bash _printf("Hello!");```
	* Output: ```bash Hello! ```

* Caratere : ```bash _printf("%c\n", "A");```
	* Output: ```bash A ```

* String: ```bash _printf("%s\n", "Hello Adrien!");```
	* Output: ```bash Hello Adrien! ```

* Integer: ```bash _printf("%i\n", "92"); ```
	* Output: ```bash 92 ```

* Decimal: ```bash _printf("%d\n", "2023"); ```
	* Output: ```bash 2023 ```

* %: ```bash _printf("Imprimer un seul signe pourcent : %%\n"); ```
	* Output: ```bash Imprimer un seul signe pourcent : % ```

----------

## ➤ Files that make up the _printf:

* [1_function_printf.c](https://github.com/francois0002/holbertonschool-printf/blob/main/1_function_printf.c) : Contains the source code for the printf function.
* [2_replace_specifier.c](https://github.com/francois0002/holbertonschool-printf/blob/main/2_replace_specifier.c) : Replacing format specifiers in source code. Format specifiers, such as %s or %d.
* [3_print_all.c](https://github.com/francois0002/holbertonschool-printf/blob/main/3_print_all.c) : Print different types of data.
* [main.h](https://github.com/francois0002/holbertonschool-printf/blob/main/main.h) : Header file containing prototypes of functions used in source code. It is included in the rest of the files via the expression: #include "main.h".
* [_putchar.c](https://github.com/francois0002/holbertonschool-printf/blob/main/_putchar.c): 


* Compile the code using :
```bash gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c ```

----------

## ➤ Requirements:

**General**

* Allowed editors: '''vi''', '''vim''', '''emacs'''
* All your files will be compiled on Ubuntu 20.04 LTS using '''gcc''', using the options '''-Wall -Werror -Wextra -pedantic -std=gnu89'''
* All your files should end with a new line
* A '''README.md''' file, at the root of the folder of the project is mandatory
* Your code should use the '''Betty''' style. It will be checked using '''betty-style.pl''' and '''betty-doc.pl'''
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the '''main.c''' files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own '''main.c''' files at compilation; do not push your own '''main.c''' file. Our '''main.c''' files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called '''main.h'''

----------

## ➤ Author:
- François Gosselin [Github](https://github.com/francois0002)
- Amandine Kemp [Github](https://github.com/amandinekemp)

----------

## ➤ License:

This project is subject to the MIT license. For detailed information on the conditions of this license, please consult the "LICENSE" file included in the project.
