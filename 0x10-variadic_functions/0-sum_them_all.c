#include <stdarg.h>
#include "variadic_functions.h"

/** 
 *sum_them_all - Return sum when given unknown amount of args
 *@n: integers to sum
 *Return: sum
 */

 int sum_them_all(const unsigned int n, ...)
 {
	 va_list valist;
	 unsigned int sum = 0, i;
	 
	 /* Verify if n == 0, return 0 */
	 if (n == 0)
		return (0);

	 /* Initialize the argument list */
	 va_start(valist, n);

	 /* iterate through list, upddate sum */
	 for (i = 0; i < n; i++)
		 sum += va_arg(valist, int); /* Get the next argument value */

	 va_end(valist); /* Clean up */
	 
	 return (sum)
}
