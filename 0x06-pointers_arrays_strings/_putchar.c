#include <unistd.h>

/**
 * _putchar - writes the chararcter c to stdout
 * @c: character to be printed
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
