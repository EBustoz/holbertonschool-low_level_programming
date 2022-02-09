#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	char times;

	alpha = 97;
	times = 0;

	while (times < 10)
	{
		while (alpha <= 122)
		{
			_putchar(alpha);
			alpha++;
		}
		alpha = 97;
		times++;
		_putchar('\n');
	}
}
