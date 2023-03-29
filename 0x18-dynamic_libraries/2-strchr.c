#include "main.h"
/**
 * _strchr - copies memory area.
 * @s: Array to be scanned
 * @c: Char to find
 *
 * Return: Pointer to the first ocurrence,
 * otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	i++;
	}

	if (s[i] == c)
	{
		return (s + i);
	}

	return ('\0');
}
