#include "main.h"
/**
 * _strcmp - Compares two strings by character
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: Positive if s1 > s2, Negative if s1 < s2, and 0 if they are equal
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 && *s2; s1++, s2++)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	return (0);
}
