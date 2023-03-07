#include "main.h"
/**
 * reverse_array - Reverses the contents of an array
 * @a: Array to be reversed
 * @n: number of array elements
 *
 * Return: Nothing
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int temp = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
