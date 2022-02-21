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
 
#endif
