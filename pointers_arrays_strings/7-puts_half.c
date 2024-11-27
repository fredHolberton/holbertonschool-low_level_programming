#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer of a char
 *
 */
void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	i = n - (n - 1) / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

