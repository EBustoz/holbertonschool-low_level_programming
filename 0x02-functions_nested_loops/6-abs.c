#include "main.h"
#include <stdio.h>

/**
 * main : Call a function that prints the abs value of a number

 *Return: Always 0 (succes)
 */

int main (void)
{
	int r;

	r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}
