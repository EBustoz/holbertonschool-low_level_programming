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

char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies n bytes of a source into buffer of a destination string,
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * @n: n bytes to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compare two strings
 * @s1: one string
 * @s2: one string
 * Return: int that tells num spaces in between
 */

int _strcmp(char *s1, char *s2);

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - unction that changes all lowercase letters of a string to uppercase
 * @s: string to manipulate
 * Return: string with all letters capitalized
 */

char *string_toupper(char *s);

/**
 * cap_string - capitalize all first letter of each word
 * @s: string ito manipulate
 * Return: string
 */

char *cap_string(char *s);

/**
 * leet - encode string into 1337
 * @s: string to manipulate
 * Return: string
 */

char *leet(char *s);

/**
 * root13 - encode string into tot13
 * @s: string to manipulate
 * Return: string
 */

char *rot13(char *s);

#endif
