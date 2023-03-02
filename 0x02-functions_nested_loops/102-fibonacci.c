#include <stdio.h>
/**
 * main - Prints first 50 fibbonaci nums
 * Return: 0
*/
int main(void)
{
	long int a = 1;
	long int b = 2;
	int n = 50;
	long int tmp;

	while (n > 0)
	{
		printf("%lu", a);
		tmp = a;
		if (n > 1)
		{
			printf(", ");
		}
		a = b;
		b = a + tmp;
		n--;
	}
	printf("\n");
	return (0);
}
