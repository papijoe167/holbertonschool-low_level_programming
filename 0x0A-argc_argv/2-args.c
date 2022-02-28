#include "main.h"
#include <stdio.h>
/**
* main - prints all arguments it receives.
* @argc: number of arguments
* @argv: array oh arguments
* Return: void
*/
int main(int argc, char *argv[])
{
	int i;

	i = 0
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

