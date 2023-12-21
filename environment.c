#include "main.h"

/**
 * _getenv - get environment variables
 * @env_var: environment variable
 * Return: return the content of the environment variable
*/
char *_getenv(char *env_var)
{
	int i = 0, j = 0;
	int status;

	while (environ[i])
	{
		status = 1;

		for (j = 0; environ[i][j] != '='; j++)
		{
			if (environ[i][j] != env_var[j])
				status = 0;
		}
		if (status == 1)
			break;
		i++;
	}
	return (&environ[i][j + 1]);
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
