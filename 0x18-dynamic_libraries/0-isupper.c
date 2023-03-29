#include "main.h"
/**
 * _isupper - Checks if character is an uppercase letter
 * @c: Character to check
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
