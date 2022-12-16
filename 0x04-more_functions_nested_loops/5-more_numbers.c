#include "main.h"

/**
 * more_numbers - main block
 *
 * description: prints 0 to 14 in 10 places
 */

void more_numbers(void)
{
	int row, column;

	for (column = 1; column <= 10; column++)
	{
		for (row = 0; row <= 14; row++)
		{
			if (row > 9)
			{
				_putchar((row / 10) + '0');
			}
			_putchar((row % 10) + '0');
		}
		_putchar('\n');
	}
}
