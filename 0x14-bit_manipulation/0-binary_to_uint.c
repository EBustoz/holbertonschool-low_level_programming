#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint -function that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * return: the converted number, or 0 if
 *         there is one or more chars in the string b that is not 0 or 1
 *         b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
    int i = 0, sum = 0, len = 0;

    if (b == NULL)
        return (0);
    
    /* get string length */
	while (b[len] != '\0')
		len++;
	len -= 1;

    while (b[i] != '\0')
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);

        if (b[i] == '1')
            sum += (1 * (1 << len));
        i++;
        len--;

    }
    return (sum);
}
