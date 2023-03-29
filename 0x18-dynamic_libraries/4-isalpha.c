#include "main.h"
/**
 * _isalpha - check if the ASCII character is alphabetic.
 * @c: An ASCII character code
 *
 * Return: 1 if is alpha,
 * Otherwise, return 0
 */
int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
