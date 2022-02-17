#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 0 (Always)
 *
 */

int _putchar(char c);

/**
 * _strcat - function that concatenates two strings
 * @dest: initial string
 * @src: string to append
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenate useu n bytes from src to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n number of bytes(chars)
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)

#endif
