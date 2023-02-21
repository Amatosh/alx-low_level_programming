#include <stdio.h>
/**
 * main - Prints unique two digit combos
 * Return: 0
*/
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 56; i++)
	{
		for (j = 49; j < 57; j++)
		{
			for (k = 50; k < 58; k++)
			{
				if (i < j && j < k && j != k && i != j)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56 || k != 57)
					{
						putchar(44);
						putchar(32);
					}

				}
			}
		}
	}
	putchar(10);
	return (0);
}
