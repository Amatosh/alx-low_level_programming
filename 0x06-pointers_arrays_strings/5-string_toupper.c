#include "main.h"
/**
 * string_toupper - Converts string to uppercase
 * @s: The string to be converted
 *
 * Return: The uppercase string
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
