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
  * _memset - fill n bytes of memory with a constant value
  * @s: pointer to memory area
  * @b: constant value
  * @n: number of bytes to fill
  * Return: memory area
  */

 char *_memset(char *s, char b, unsigned int n);

 /**
  * _memcpy - copy n bytes of memory from source to destination
  * @dest: destination
  * @src: source
  * @n: number of bytes
  * Return: pointer to dest
  */

 char *_memcpy(char *dest, char *src, unsigned int n);

 /**
 * _strchr - locate 1st occurrence of char in string and returns pointer there
 * @s: string to search
 * @c: target characer
 * Return: pointer to that character in string (NULL is not located)
 */

char *_strchr(char *s, char c);

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of string at first occurence
 */

char *_strpbrk(char *s, char *accept);

#endif