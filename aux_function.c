#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: the destination chain
 * @src: the source chain
 * Return: chain value
 **/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}

#include "main.h"

/**
* _strcmp - compare deux chaînes de caractères
* @s1: input value
* @s2: input value
* Return: s1[i] - s2[i]
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[1] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src into the dest buffer
 * @dest: copy destination
 * @src: copy source
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *new;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	new = malloc(sizeof(char) * (i + 1));

	if (new == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		new[r] = str[r];

	return (new);
}

/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}