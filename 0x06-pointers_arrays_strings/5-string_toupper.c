#include "main.h"
/**
* string_toupper - changes all lowercase letters to uppers.
* @s: string
* Return: string array
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

		return (s);
}
