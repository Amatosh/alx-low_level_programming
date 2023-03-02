#include "main.h"
/**
 * _islower - checks if input is lowercase
 * @c: input to be checked
 *
 * Return: 1 if lower, 0 otherwise
*/
int _islower(int c)
{
	int i;
	int result = 0;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			result = 1;
		}
	}
	return (result);
}

