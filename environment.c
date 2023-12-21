#include "main.h"

/**
 * _getenv - get environment variables
 * @env_var: environment variable
 * Return: return the content of the environment variable
*/
char *_getenv(char *env_var)
{
	int i, j;
	int status;

	for (i = 0; environ[i] != NULL; i++)
	{
		status = 1;
		for (j = 0; environ[i][j] != '='; j++)
		{
			if (env_var[j] != environ[i][j])
			{
				status = 0;
				break;
			}
		}
		if (status)
		{
			return (&environ[i][j + 1]);
		}
		return (NULL);
	}
}

/**
 * _printenv - print the current environment variables
*/
void _printenv(void)
{
	int i = 0;

	while (environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}
}
