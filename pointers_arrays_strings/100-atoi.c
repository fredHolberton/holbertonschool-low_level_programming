#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer of a char
 *
 * Return: Integer
 */
int _atoi(char *s)
{
	int i = 0;
	int ichar;
	unsigned int atoi = 0;
	int sign = 1;
	int firstNumberFind = 0;
	int lastNumberFind = 0;

	while (s[i] != '\0' && lastNumberFind == 0)
	{
		ichar = s[i] - '0';
		if (firstNumberFind == 1 && (ichar < 0 || ichar > 9))
			lastNumberFind = 1;
		else
		{
			if (ichar >= 0 && ichar <= 9)
			{
				atoi = (10 * atoi) + ichar;
				firstNumberFind = 1;
			}
			if (firstNumberFind == 0 && s[i] == '-')
				sign = sign * -1;
			i++;
		}
	}
	return (atoi * sign);
}

