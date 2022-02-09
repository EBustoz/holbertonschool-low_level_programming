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
 * print_alphabet - Prints alphabet in lowercase
 * @c: The character to prin
 *
 * Return: On success 0 (Always)
 *
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - Prints alphabet in lowercase 10 times
 * @c: The character to prin
 *
 * Return: On success 0 (Always)
 *
 */

void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase character
 * @c: The character to cehck
 *
 * Return: On success 1 ( 0 otherwise)
 *
 */

int _islower(int c);

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to cehck
 *
 * Return: On success 1 ( 0 otherwise)
 *
 */

int _isalpha(int c);

/**
 * _print_sign -  prints the sign of a number
 * @c: The number to cehck
 *
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
* Returns -1 and prints - if n is less than zero
 *
 */

int print_sign(int c);

/**
 * _abs - computes the absolute value of an integer.
 * @c: The value to checks
 *
 * Return: the abs value of @c
 *
 */

int _abs(int c);

/**
 * print_last_digit - prints the last digit of a number.
 * @c: The value to checks
 *
 * Return: the value of last digit of @c
 *
 */

int print_last_digit(int c);

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *              starting from 00:00 to 23:59.
 * Description: print minutes 00:00 to 23:59
 *
 */

void jack_bauer(void);

/**
 * times_table -  * times_table - prints every minute of the day of Jack Bauer,
 *
 * Description: print multiplication table
 *
 */

void print_times_table(void);

/**
 * add -  function that adds two integers and returns the result.
 *
 * Description: adds two integers and returns the result.
 *
 */

int add(int a, int b);

/**
 * print_to_98 -  prints all natural numbers from n to 98,
 *                followed by a new line
 *
 */

void print_to_98(int n);

/**
 * print_times_table - print multiplication table up to n
 * @n: integer argument
 */

void print_times_table(int n);

#endif
