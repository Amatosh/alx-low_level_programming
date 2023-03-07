#include "main.h"

/**
 *  _memset - fill n bytes of memory with a constant value
 *  @s: pointer to memory area
 *  @b: value
 *  @n: number of bytes to fill
 *  Return: Filled area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int max = n;

	if (max > 0)
	{
		int i;

		for (i = 0; i < max; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
