#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <time.h>
/* more headers goes there */
/**
 * positive_or_negative - Equates numbers
 *@i: entry point
 * description: equality matching
 *
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i > 0)
	{	printf("%d is positive\n", i);
	}
	else
	{	printf("%d is zero\n", i);
	}
}
