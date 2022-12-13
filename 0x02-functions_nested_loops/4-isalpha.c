#include "main.h"

/**
 * _isalpha - checks for an alphabet
 * @c: Entry point
 *
 * description: this checks for an alphabet in a given characters
 *
 * Return: 0 if unsuccessful and 1 if successful
 */

int _isalpha(int c)
{

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
}
