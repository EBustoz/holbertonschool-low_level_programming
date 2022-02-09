#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers n to 98
 * @c: integer argument
 */

void print_to_98(int c)
{
	while (c < 98)
	{
		printf("%d, ", c);
		c++;
	}

	while (c > 98)
	{
		printf("%d, ", c);
		c--;
	}

	if (c == 98)
		printf("%d", c);

	printf("\n");
}
