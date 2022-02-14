#include "main.h"
/**
* _strcpy - copies the string
* @dest: character 1
* @src: character 2
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
