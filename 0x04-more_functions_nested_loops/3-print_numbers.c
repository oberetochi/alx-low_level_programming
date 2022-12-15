#include "main.h"

/**
 * print_numbers - main block
 *
 * description: prints numbers from 0 to 9
 * followed by new line
 */

void print_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		_putchar((c % 10) + '0');
	}
	_putchar('\n');
}
