#include "shell.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: No of similar characters
 */
int _strcmp(const char *s1, const char *s2)
{
	int i;
	int res;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		res = s1[i] - s2[i];

		if (s1[i] != s2[i])
			break;
	}
	return (res);
}


/**
 * _strlen - It returns the length of a string
 * @s: the string to be checked
 *
 * Return: a positive integer
 */

int _strlen(const char *s)
{
	int strlength = 0;

	while (*s != '\0')
	{
		strlength++;
		s++;
	}

	return (strlength);
}
