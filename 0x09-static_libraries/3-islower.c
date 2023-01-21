#include "main.h"
/**
 * _islower - Picks out the lowercase character of the alphabets
 *
 * @c: Entry point
 * Return: 1 if lowercase or 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
