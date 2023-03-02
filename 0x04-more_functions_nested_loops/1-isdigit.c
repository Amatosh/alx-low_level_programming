#include "main.h"
/**
 * _isdigit - Checks if input is digit or not
 * @c: Input to be checked
 *
 * Return: 0
*/

int _isdigit(int c)
{
	int val = 0;

	if (c >= 48 && c <= 57)
	{
		val = 1;
	}
	return (val);
}
