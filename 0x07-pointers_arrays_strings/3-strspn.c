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
	int found1 = 1;
	int found2 = 1;
	int match = 0;

	while ((*(s + i)) && (found1 == 1))
	{
		while ((*(accept + j)) && (found2 == 1))
		{
			if (*(s + i) == *(accept + j))
			{
				match++;
				found1 = 1;
				found2 = 0;
			}
			j++;
		}
		if ((*(accept + j) == '\0') && (found2 == 1))
			found1 = 0;
		i++;
		j = 0;
		found2 = 1;
	}
	return (match);
}
