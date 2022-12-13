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
	char p, n, z;

	p = "+";
	n = "-";
	z = "0";

	if (n > 0)
	{
		_putcahr(p);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(z);
		return (0);
	}
	esle if (n < 0)
	{
		_putchar(n);
		return (-1);
	}
	else
	{
		_putcahr('-');
		return ('/');
	}
}
