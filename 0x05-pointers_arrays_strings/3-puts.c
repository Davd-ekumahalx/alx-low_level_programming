#include "main.h"
/**
 * _puts - prints a string, followed by new line, to stdout
 * @str: strng to print
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
