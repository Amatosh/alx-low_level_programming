#include <unistd.h>
#include <string.h>
/**
 * main - writes to standard error
 * Return: 1
 */
int main(void)
{
	char *errop = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, errop, strlen(errop));
	return (1);
}
