#include "main.h"
/*
 * _islower - Picks out the lowercase character of the alphabets
 * Return: 1 if successful or 0 if unsuccessful
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
