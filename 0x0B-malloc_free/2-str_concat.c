#include<stdlib.h>
#include"main.h"

/**
 * str_concat - A function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * Return: A pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptstr;
	unsigned int str_len1, str_len2, count;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (str_len1 = 0; s1[str_len1] != '\0'; str_len1++)
	{}
	for (str_len2 = 0; s2[str_len2] != '\0'; str_len2++)
	{}

	ptstr = malloc(((str_len1 + str_len2) * sizeof(char)) + 1);

	if (ptstr == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < str_len1; count++)
	{
		ptstr[count] = s1[count];
	}
	for (count = 0; count < str_len2; count++)
	{
		ptstr[str_len1 + count] = s2[count];
	}
	return (ptstr);
}
