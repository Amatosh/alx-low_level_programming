#include "main.h"
/**
 * _strncat - Returns a concatenated string
 * @src: Source string
 * @dest: Destination string
 * @n: Number of bytes
 * Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	if (j < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
