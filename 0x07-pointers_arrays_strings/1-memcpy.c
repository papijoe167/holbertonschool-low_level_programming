#include "main.h"
/**
* _memcpy - copies bytes from memory area to another.
* @dest: destination
* @src: area
* @n: bytes
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}

	return (dest);
}
