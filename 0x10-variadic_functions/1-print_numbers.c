#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print varying amount of numbers
 * @separatos: delimiter
 * @n: amount of arguments in list
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	/* validate arguments */
	if (n > 0)
	{
		va_start(valist, n);  /* Initialize valist */
		for (i = 1; i <= n; i++)   /* Iterate through list, 
					      print number and separator */
		{
			printf("%d", va_arg(valist, int));
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(valist);  /* free list */
	}
	printf("\n");
}
