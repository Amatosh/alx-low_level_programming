#include "main.h"

/**
 * _isupper - Checks if input is uppercase or not
 * @c: Input to be checked
 *
 * Return: 0
*/

int _isupper(int c)
{
	int val = 0;

	if (c >= 65 && c <= 90)
	{
		val = 1;
	}
	return (val);
}
