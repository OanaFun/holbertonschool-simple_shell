#include "main.h"

/**
 * _getenv - get an environment variable
 * @name: pointer to the name of the environment variable
 * @env: list of strings representing environment variables
 * Return: pointer to the value in the environment
 * or NULL is there is no match
*/
char *_getenv(const char *name, char **env)
{
	int i = 0, j = 0;
	int res, len;

	while (env[i] != NULL)
	{
		res = strcmp(name, (const char *)env[i]);
		if (res ==  1)
		{
			len = strlen(env[i]);
			while (env[i][j] != '=')
			{
				j++;
			}
			len -= j;
			return (env[i] + j + 1);
		}
		i++;
	}
	return (NULL);
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
