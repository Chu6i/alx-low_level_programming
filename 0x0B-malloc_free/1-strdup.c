#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A func that returns a pointer to a newly allocated space in memory
 * @str: A string input
 * Return: A pointer to the new string
 */

char *_strdup(char *str)
{
	char *ptstr;
	int str_len, count;

	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}

	ptstr = malloc(str_len * sizeof(char) + 1);

	if (ptstr == NULL)
	{
		return (NULL);
	}
	for (count = 0; str[count] != '\0'; count++)
	{
		ptstr[count] = str[count];
	}

	ptstr[count] = '\0';

	return (ptstr);
}
