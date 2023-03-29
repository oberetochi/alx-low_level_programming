#include "main.h"
/**
 * _strstr - Finds first instance of `needle` in `haystack`
 * @haystack: the string to be searched in
 * @needle: the substring to search for
 * Return: pointer to first character of substring within string, or NULL if
 * not found
 */
char *_strstr(char *haystack, char *needle)
{
int i;

for (; *haystack; haystack++)
{
for (i = 0; needle[i]; i++)
{
if (needle[i] != haystack[i])
break;
}

if (needle[i] == '\0')
return (haystack);
}
return (0);
}
