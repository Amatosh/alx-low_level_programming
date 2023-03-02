#include "main.h"
/**
 * print_sign - Prints the sign attached to a number
 * @n: The number to be checked
 *
 * Return: 1 or -1 if pos or neg, else 0 if 0.
 */
int print_sign(int n)
{
	int res = 0;

	if (n > 0)
	{
		_putchar(43);
		res = 1;
	} else if (n < 0)
	{
		_putchar(45);
		res = -1;
	} else if (n == 0)
	{
		_putchar(48);
	}
	return (res);
}
