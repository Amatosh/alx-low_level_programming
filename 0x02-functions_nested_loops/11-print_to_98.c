#include <stdio.h>
/**
 * print_to_98 - Prints all integers from input to 98
 * @num: input num
 *
 * Return: 0
*/
int print_to_98(int num)
{
	while (num <= 98 || num >= 98)
	{
		if (num == 98)
		{
			printf("%d\n", num);
			break;
		} else if (num > 98)
		{
			printf("%d, ", num);
			num--;
		} else if (num < 98)
		{
			printf("%d, ", num);
			num++;
		} else if (num >= 0 && num <= 98)
		{
			printf("%d, ", num);
		}
	}
	return (0);
}
