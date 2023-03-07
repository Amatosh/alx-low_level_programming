#include "main.h"
/**
 * _strncpy - Copies a string
 * @src: Source string
 * @dest: Destination string
 * @n: Number of bytes
 * Return: Concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
