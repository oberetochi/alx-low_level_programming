#include "main.h"

/**
 * print_sign - Prints sign of a number
 * @n: Entry point
 * Return: 1 if greater than zero and prints +
 * 0 if equal to zero and prints 0
 * -1 if less than 0 and prints -
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putcahr('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	esle if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putcahr('-');
		return ('/');
	}
}
