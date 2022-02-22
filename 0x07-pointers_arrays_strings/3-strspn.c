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

	while (*(accept + i))
	{
		while (*(s + j))
		{
			if (*(accept + i) == *(s + j))
				return (j + 1);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
