#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: pointer of a char
 *
 */
void print_rev(char *s)
{
	int i = _strlen(s);

	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}