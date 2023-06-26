#include "main.h"
/**
 *_puts - prints a string, to stdout
 *@str: value to be evaluate.
 *Return: not.
 */
void _puts(char *str)
{
    while(*str!='\0')
    {

      putchar(*str);
      str++;
    }
    _putchar('\n');
}
