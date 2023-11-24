
![Holberton](https://uploads-ssl.webflow.com/6105315644a26f77912a1ada/63eea844ae4e3022154e2878_Holberton-p-500.png)

# C - Printf
----------

![Duo](https://img.freepik.com/vecteurs-libre/concept-collegues-pour-page-destination_23-2148329990.jpg?w=900&t=st=1700661500~exp=1700662100~hmac=85f896325c620f5721bd5a64d738c00122c01bf3b8de21945a54832c7f0ed092)

----------

## Menu:

- [➤ Description](https://github.com/francois0002/holbertonschool-printf#-description)
- [➤ Flowchart](https://github.com/francois0002/holbertonschool-printf/tree/main#-flowchart)
- [➤ Format types](https://github.com/francois0002/holbertonschool-printf#-format-types)
- [➤ Examples](https://github.com/francois0002/holbertonschool-printf#-examples)
- [➤ Files that make up the _printf](https://github.com/francois0002/holbertonschool-printf#-files-that-make-up-the-_printf)
- [➤ Requirements](https://github.com/francois0002/holbertonschool-printf#-requirements)
- [➤ Author](https://github.com/francois0002/holbertonschool-printf#-author)
- [➤ License](https://github.com/francois0002/holbertonschool-printf#-license)

----------

## ➤ Description:

The '_printf' function emulates the standard C language function of the same name, responsible for printing formatted strings on screen. It takes as input an initial variable, a character string, and goes through each character one by one, then prints it.

When it encounters a format specifier (e.g. %s or %d), it extracts the corresponding data type from the arguments and prints the contents of the associated variable.

In the case of an undeclared format specifier, such as %T, the _printf function behaves intuitively by printing the specifier as is, preserving the function's flexibility to handle future directives.

----------

## ➤ Flowchart:

![➤ Flowchart ➤](https://github.com/francois0002/holbertonschool-printf/blob/main/flowchart.jpeg)

----------

## ➤ Format types:

| Type     | Output                              | 
| -------- | ----------------------------------- |
| %c       | Print argument of character type    |
| %s       | Print argument of string type       |
| %i       | Print argument of integer type      |
| %%       | Prints a single %                   |
| %d       | Print a decimal (base 10) number    |

----------

## ➤ Examples:

* String without type: ``` _printf("Hello!");```
	* Output: ``` Hello! ```

* Charater : ``` _printf("%c", 'A');```
	* Output: ``` A ```

* String: ``` _printf("Whatever happens, %s", "we're a duo that rocks!");```
	* Output: ``` Whatever happens, we're a duo that rocks! ```

* Integer: ``` _printf("%i", "92"); ```
	* Output: ``` 92 ```

* Decimal: ``` _printf("%d", "2023"); ```
	* Output: ``` 2023 ```

* %: ``` _printf("Print a single percent sign : %%"); ```
	* Output: ``` Print a single percent sign : % ```

* ``` _printf("Hi Adrien, for this %d session, do you think we could have a %c or min of %i %%?", 2023, 'A', 60); ```
	* Output: ``` Hi Adrien, for this 2023 session, do you think we could have a A or min of 60 %? ```

----------

## ➤ Files that make up the _printf:

* [1_printf.c](https://github.com/francois0002/holbertonschool-printf/blob/main/1_printf.c) : Contains the source code for the printf function.
* [2_replace_specifier.c](https://github.com/francois0002/holbertonschool-printf/blob/main/2_replace_specifier.c) : Replacing format specifiers in source code. Format specifiers, such as %s or %d.
* [3_print_functions.c](https://github.com/francois0002/holbertonschool-printf/blob/main/3_print_functions.c) : Print different types of data.
* [main.h](https://github.com/francois0002/holbertonschool-printf/blob/main/main.h) : Header file containing prototypes of functions used in source code. It is included in the rest of the files via the expression: #include "main.h".
* [_putchar.c](https://github.com/francois0002/holbertonschool-printf/blob/main/_putchar.c): Writes the character c to stdout.
* [flowchart.jpeg](https://github.com/francois0002/holbertonschool-printf/blob/main/flowchart.jpeg): Graphical representation of printf.
* [LICENSE](https://github.com/francois0002/holbertonschool-printf/blob/main/LICENSE): MIT license.
* [man_3_printf](https://github.com/francois0002/holbertonschool-printf/blob/main/man_3_printf): Manuel printf.
* [README.md](https://github.com/francois0002/holbertonschool-printf/blob/main/README.md): Docs.

* Compile the code using :
``` gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c ```

* Read the man using :
``` man ./man_3_printf ```

----------

## ➤ Requirements:

**General**

* Files can be compiled on Ubuntu 20.04 LTS using ``` gcc```, using the options ``` -Wall -Werror -Wextra -pedantic -std=gnu89 ```.
* A ``` README.md ``` file is bring at the root of the folder of the project.
* Our code use the ``` Betty ``` style.
* There is no use global variables.
* There is no more than 5 functions per file.
* You can use your own ``` main.c``` files at compilation.
* If you want add some functions, you can put the prototypes in the header file called ``` main.h ```.

----------

## ➤ Author:

- François Gosselin [Github](https://github.com/francois0002)
- Amandine Kemp [Github](https://github.com/amandinekemp)

----------

## ➤ License:

This project is subject to the MIT license. For detailed information on the conditions of this license, please consult the "LICENSE" file included in the project.
