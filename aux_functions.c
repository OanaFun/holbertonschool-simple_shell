#include "main.h"

/**
 * _strlen - function returns the length of a string
 *
 * @s: string to calculate the length
 *
 * Return: return the value of '_strlen'
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

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

/**
 * _strcpy - copy the string pointed to by src
 * including the terminating null byte '\0'
 * to the buffer pointed to by dest
 *
 * @dest: the pointer to the destination array
 * where the content is to be copied
 *
 * @src: the string to be copied
 *
 * Return: the pointer to dest
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
 * _strdup - return a pointer to a new string
 * which is a duplicate of the string parameter str
 *
 * @str: the source string
 *
 * Return: pointer to the duplicated string,
 * or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *copy;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	copy = malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[i] = '\0';
	return (copy);
}
