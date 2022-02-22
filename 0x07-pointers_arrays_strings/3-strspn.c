#include "main.h"

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 **/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;

	while (*(s + i))
	{
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				return (i);
			j++;
		}
		i++;
	}
	return (0);
}
