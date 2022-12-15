#include "main.h"

/**
 * print_most_numbers - main block
 *
 * description: Prints numbers 0 to 9
 * do not print 2 and 4
 *
 */

void print_most_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
		{
			_putchar((c % 10) + 48);
		}
	}
	_putchar('\n');
}


