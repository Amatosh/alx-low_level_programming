#include "main.h"
/**
 * cap_string - Converts words to title case
 * @str: string to be converted
 *
 * Return: Title-cased string
*/
char *cap_string(char *str)
{
	int i;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	for (i = 1; str[i]; i++)
	{
		for (j = 0; separators[j]; j++)
		{
			if (str[i - 1] == separators[j] && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				break;
			}
		}
	}
	return (str);
}
