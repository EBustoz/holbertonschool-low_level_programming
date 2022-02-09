#include "main.h"
#include <limits.h>

/**
* add - function that adds two integers and returns the result.
* @a: first number to add
* @b: second number to add
* Return: sum
*/


int add(int a, int b)
{
	if (a > INT_MAX - b)
		return (0);
	return (a + b);
}
