#include "./main.h"
/**
 * main - Prints _putchar
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";
	int i;
	int size = sizeof(str);

	for (i = 0; i < size - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
