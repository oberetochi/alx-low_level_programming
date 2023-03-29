#include "main.h"
/**
 * _strcpy - like string copy but homemade
 * @dest: pointer to a char (destination)
 * @src: pointer to a char (source)
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int srclen = _strlen(src);

	for (i = 0; i <= srclen; i++)
	{
		if (i == srclen)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}

	return (dest);
}
