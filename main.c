#include "main.h"
/**
 * main - simple shell program
 * Return: int exit status or exit code
*/
int main(void)
{
	char *buff = NULL, **args;
	size_t read_size = 0;
	ssize_t buff_size = 0;
	int exit_status = 0;

	while (1)
	{
		if (isatty(0))
			printf("$ ");
		buff_size = getline(&buff, &read_size, stdin);
		if ((buff_size == -1 || strcmp("exit\n", buff)) == 0)
		{
			free(buff);
			exit(EXIT_SUCCESS);
		}
		buff[buff_size - 1] = '\0';
		if (strcmp("env", buff) == 0)
		{
			_printenv();
			continue;
		}
		if (empty_line(buff) == 1)
		{
			exit_status = 0;
			continue;
		}
		args = _split(buff, " ");
		args[0] = search_path(args[0]);

		if (args[0] != NULL)
			exit_status = execute(args);
		else
			perror("Error");
		free(args);
	}
	return (exit_status);
}
