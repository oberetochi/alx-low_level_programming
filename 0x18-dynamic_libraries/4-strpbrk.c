#include "main.h"
/**
 * _strpbrk - searches string for a set of characters
 * @s: pointer to beginning of string to be searched
 * @accept: list of acceptable characters
 *
 * Return: pointer to character if found, otherwise returns NULL
 */
char *_strpbrk(char *s, char *accept)
{
int found = 0;
int i;

for (; *s; s++)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
found = 1;
break;
}
}

if (found)
break;
}

return (0);
}
