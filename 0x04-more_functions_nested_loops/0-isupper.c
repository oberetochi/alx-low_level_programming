#include "main.h"

/**
 * _isupper - Main block
 *
 * @c: entry point
 *
 * description: Checks for uppercase
 *
 * Return: 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
