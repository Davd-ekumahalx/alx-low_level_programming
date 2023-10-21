#include "main.h"
/**
 * leet - The encode into 1337speak
 * Return: n value
 */
char *leet(char *str)
{
int i, j;
char *encoded = malloc(strlen(str) + 1);

for (i = 0, j = 0; str[i] != '\0'; i++, j++)
{
encoded[j] = str[i];

if (str[i] == 'a' || str[i] == 'A')
{
encoded[j] = '4';
}
if (str[i] == 'e' || str[i] == 'E')
{
encoded[j] = '3';
}
if (str[i] == 'o' || str[i] == 'O')
{
encoded[j] = '0';
}
if (str[i] == 't' || str[i] == 'T')
{
encoded[j] = '7';
}
if (str[i] == 'l' || str[i] == 'L')
{
encoded[j] = '1';
}
}
encoded[j] = '\0';
return (n);
}
