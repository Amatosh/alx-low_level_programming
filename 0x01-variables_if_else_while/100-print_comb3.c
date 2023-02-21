#include <stdio.h>
/**
 * main - Prints unique two digit combos
 * Return: 0
*/
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			if (i < j && i != j)
			{
				putchar(i);
				putchar(j);
				if (i + j != 113)
				{
				putchar(44);
				putchar(32);
				}
			}


	}
	}
	putchar(10);
	return (0);
}
