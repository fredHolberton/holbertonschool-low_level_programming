#include "main.h"

/**
* rev_string - reverses a string.
* @s: pointer of a char
*
*/
void rev_string(char *s)
{
	int i = 0;
	int n = 0;
	int j;
	char temp;

	while (s[n] != '\0')
	{
		n++;
	}
	j = n - 1;
	while (i < n / 2) 
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

