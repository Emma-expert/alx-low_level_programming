#include "main.h"

/**
 * _strncpy - copies string
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
