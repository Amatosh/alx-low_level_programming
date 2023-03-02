#include "main.h"
/**
 * swap_int - swaps the values of two supplied int pointers
 * @a: pointer 1
 * @b: pointer 2
*/
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
