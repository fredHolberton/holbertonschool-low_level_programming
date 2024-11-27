#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: pointer of a char
 *
 */
void puts2(char *str)
{
	int i = 0;
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	while (str[i] != '\0' && i <= n)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

