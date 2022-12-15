#include "main.h"

/**
 * _isdigit - Main block
 *
 * description: chevks for digits between 0 through 9
 *
 * @c: entry point
 *
 * Return: 1 if digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' &&  c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
