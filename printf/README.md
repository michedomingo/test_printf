# \_printf

[Partner project Repo](https://github.com/derric-d/printf)

\_printf is a custom replication of the C programming standard library printf() function. When the \_printf function is successful, it produces output based on the identifiers listed below, and returns the length of the string passed (or returns (-1) when fails).

### Prototype

```bash
int _printf(const char *format, ...);
```

### Format Specifiers

| Identifier | Description                  | Function                                                                          |
| ---------- | ---------------------------- | --------------------------------------------------------------------------------- |
| %c         | Prints a character           | [print_char](https://github.com/derric-d/printf/blob/master/printAlpha.c)         |
| %s         | Prints a string              | [print_string](https://github.com/derric-d/printf/blob/master/printAlpha.c)       |
| %d or %i   | Prints integers              | [print_int](https://github.com/derric-d/printf/blob/master/print_number.c)        |
| %u         | Prints unsigned integers     | [print_unsigned](https://github.com/derric-d/printf/blob/master/print_number.c)   |
| %o         | Prints unsigned octal        | [print_octal](https://github.com/derric-d/printf/blob/master/base_changes.c)      |
| %x         | Prints lowercase hexadecimal | [print_hex](https://github.com/derric-d/printf/blob/master/base_changes.c)        |
| %X         | Prints uppercase hexadecimal | [print_HEX](https://github.com/derric-d/printf/blob/master/base_changes.c)        |
| %r         | Prints the reversed string   | [print_rev](https://github.com/derric-d/printf/blob/master/string_manipulation.c) |
| %R         | Prints the rot13'ed string   | [rot13](https://github.com/derric-d/printf/blob/master/string_manipulation.c)     |

---

## Project Requirements

### General

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 14.04 LTS
- Programs and functions will be compiled with gcc 4.8.4 using flags:

```c
$ gcc -Wall -Werror -Wextra -pedantic *.c
```

- All files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Code should use the [Betty style](https://github.com/holbertonschool/Betty/wiki)
- Global variables are not allowed
- No more than 5 functions per file
- The prototypes of all functions should be included in a header file called holberton.h
- Header files should be include guarded
- Github - There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

### Authorized functions and macros

- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

---

## Examples

```c
$ cat main.c
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let us try to printf a simple sentence.\n");
    len2 = printf("Let us try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}
```

#### Ouptput:

```c
$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
$ ./a.out
Let us try to printf a simple sentence.
Let us try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Len:[12]
Len:[12]

```

---

### Authors

- **Derric Donehoo** - [derric-d](https://github.com/derric-d)
- **Michelle Domingo** - [michedomingo](https://github.com/michedomingo)
