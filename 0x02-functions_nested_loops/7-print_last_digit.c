#include "main.h"
/**
 * _abs - returns the absolute value
 * @n: Number to be checked
 *
 * Return: Number
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n *= -1);
	}
	return (n);
}

/**
 * print_last_digit - Prints the last digit of a number
 * @n: input number
 *
 * Return: Last digit
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(_abs(n) % 10));
	return (_abs(_abs(n) % 10));
}
