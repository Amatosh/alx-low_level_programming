#include <stdio.h>
/**
 * main - Prints sum of multiples of 3 or 5
 * Return: 0
*/
int main(void)
{
	int i = 0;
	int _sum = 0;

	while (i <= 1023)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			_sum += i;
		}
		i++;

	}
	printf("%d\n", _sum);
	return (0);
}
