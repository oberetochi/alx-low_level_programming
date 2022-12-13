#include "main.h"

/**
 * main - entry point
 *
 * print_alphabet: Using custom header to print alphabets777
 * 
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

