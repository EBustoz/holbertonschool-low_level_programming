#include "main.h"

/**
 * rot13 - encode string into tot13
 * @s: string to manipulate
 * Return: string
 */

char *rot13(char *s)
{
	char a[53] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char b[53] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		i = 0;
		while (a[i] != s[j] && i < 52)
			i++;
		if (s[j] == a[i])
			s[j] = b[i];
	}
	return (s);
}
