#include "main.h"
/**
 * cap_string - Capitalizes all words in a string
 * @str: The input string to capitalize
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
int i;
bool capitalize = true;
if (str == NULL || *str == '\0')
{
return (str);
}
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}' || str[i] == '\0')
{
capitalize = true;
}
else if (capitalize && isalpha(str[i]))
{
str[i] = toupper(str[i]);
capitalize = false;
}
else
{
str[i] = tolower(str[i]);
}
}
return (str);
}
int main(void)
{
char test_string[] = "this is a test, check it; this is a test. hello (world)";
char *result = cap_string(test_string);
printf("%s\n", result);

return (0);
}
