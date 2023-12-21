#include "main.h"

/**
 * search_path - search file through the path
 * @command: the input command line
 * Return: the path to the input command
*/

char *search_path(char *command)
{
	char *path = _getenv("PATH"), *path_cpy;
	char **path_split;
	char *path_concat = NULL;
	int i = 0, path_len = 0;
	struct stat info;

	for (; environ[i]; i++)
		printf("%s\n", path);
	if (stat(command, &info) == 0)
		return (command);

	path_cpy = malloc(strlen(path) + 1);

	path_cpy = strcpy(path_cpy, path);
	path_split = _split(path_cpy, ":");

	while (path_split[i])
	{
		path_len = strlen(path_split[i]);

		if (path_split[i][path_len - 1] != '/')
			path_concat = strcat(path_split[i], "/");

		path_concat = strcat(path_split[i], command);

		if (stat(path_concat, &info) == 0)
			break;

		i++;
	}

	free(path_cpy);

	if (!path_split[i])
	{
		free(path_split);
		return (NULL);
	}

	free(path_split);
	return (path_concat);
}
