#include "main.h"
/**
 * _strlen - Finds length of string
 * @s: String pointer
 * Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		++i;
		s++;
	}
	return (i);
}
