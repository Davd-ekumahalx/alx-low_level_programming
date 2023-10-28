#include "main.h"
/**
 * _isapha - program checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is aletter and return 0 if its not
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
