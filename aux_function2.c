#include "main.h"
#include <stdlib.h>
/**
 * _atoi - convert a string to an integer.
 * @s: pointer to input string.
 * Return: 0 if there are no numbers in the string.
*/
int _atoi(char *s)
{
	int i, sign = 1, number = 0;

	for (i = 0; s[i] != '\0' && (s[i] < '0' || s[i] > '9'); i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
	}
	for (; (s[i] >= '0' && s[i] <= '9') && s[i]; i++)
	{
		number = (number * 10) + (s[i] - '0');
	}
	if (sign < 0)
	{
		number  = number * sign;
	}
	return (number);
}
