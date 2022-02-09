#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.i
 * @c: teh number to check
 * Return: Returns the value of the last digit
 */

int print_last_digit(int c)
{
	_putchar(-(c % 10) + 48);
	return (-(c % 10));
}
