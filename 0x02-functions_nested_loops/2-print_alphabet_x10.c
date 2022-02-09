#include "main.h"

/**
 * print_alphabeth_x10 - print alphabet in lower case 10 times
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
int a, b;

for (a = 0; a <= 9; a++)
{
for (b = 97; b <= 122; b++)
{
_putchar(b);
}
_putchar('\n');
}
}
