#include "main.h"
/**
 * _islower - check if the ASCII character is lowercase.
 * @c: An ASCII character code
 *
 * Return: 1 if lowercase,
 * Otherwise, return 0
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
