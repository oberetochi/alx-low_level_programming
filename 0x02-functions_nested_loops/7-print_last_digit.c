#include "main.h"

/**
 * print_last_digit - prints last digits
 *
 *@n: Entry point
 *
 * Returns: value of digits _last digits
 */

int print_last_digit(int n)
{
	int last_digits;

	last_digits = n % 10;
	if (last_digits < 0)
	{
		last_digits = last_digits * (-1);
		_putchar(last_digits + '0');
	}
	return (last_digits);
}
