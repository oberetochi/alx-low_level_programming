
#include "main.h"
/* more headers goes there */
/**
 * positive_or_negative - Entry point
 *
 * description: equality matching
 */

void positive_or_negative(int i)
{
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
