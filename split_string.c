#include "main.h"

/**
 * _split - split string in tokens with delimiters
 * @str: string to be parsed
 * @delim: character that delimits the tokens in the parsed string
 * Return: a pointer to the first character of the first token found in the
 * string; if there are no more tokens left, a NULL pointer is returned.
*/

char **_split(char *str, const char *delim)
{
	char *token, **split_str;
	int i = 0;

	token = strtok(str, delim);
	split_str = (char **)calloc(100, sizeof(char *));

	if (!split_str)
	{
		free(split_str);
		return (NULL);
	}

	while (token)
	{
		split_str[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	return (split_str);
}
