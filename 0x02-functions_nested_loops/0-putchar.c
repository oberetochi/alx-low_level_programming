#include <stdio.h>
#include "main.h"
/**
 * main - Entry poin
 *
 * Return: 0 if successful
 */
int_putchar(void)
{
	char c = "_putchar";

	while (c)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);
}
