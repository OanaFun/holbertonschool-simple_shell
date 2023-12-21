#include "main.h"

/**
 * empty_line - check if exists an empty line
 * @buff: line
 * Return: 0 if successful or 1 if error
*/

int empty_line(char *buff)
{
	int i;

	for (i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] != ' ')
			return (0);
	}
	return (1);
}
