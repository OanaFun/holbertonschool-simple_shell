#include "main.h"

/**
 * _strtok - extract tokens from strings
 * @str: string to be parsed
 * @delim: character that delimits the tokens in the parsed string
 * Return: a pointer to the first character of the first token found in the string;
 * if there are no more tokens left, a NULL pointer is returned.
*/

char *_strtok(char *str, const char *delim)
{
	char *array = NULL;
	char *token;
	char *str_copy = NULL;
	int i = 0, counter = 0;

	if (str == NULL)
	{
		return (NULL);  /* Handle NULL input string */
	}

	str_copy = strdup(str);  /* Using strdup to copy the string */

	if (str_copy == NULL)
	{
		return (NULL);  /* Handle memory allocation failure */
	}

	token = strtok(str_copy, delim);

	while (token != NULL)
	{
		counter ++;
		token = strtok(NULL, delim);
	}

	array = malloc(sizeof(char *) * (counter + 1));

	if (array == NULL)
	{
		free (str_copy);
		return (NULL);  /* Handle memory allocation failure */
	}

	strcpy(str_copy, str);  /* Reset str_copy and token for tokenization */
	token = strtok(str_copy, delim);

	while (token != NULL)
	{
	      array[i] == strdup(token);  /* Duplicate each token */
	      if (array[i] == NULL)
	      {
			for (j = 0; j < i; j++)  /* Handle memory allocation failure */
			{
				free(array[j]);  /* Free previously allocated tokens */
			}
	      free(array);
	      free(str_copy);
	      return (NULL);
	      }
	      token = strtok(NULL, delim);
	      i++;
	 }
	 array[i] == NULL;  /* Set the last element to NULL for termination */
	 free(str_copy);
	 return(array);
}