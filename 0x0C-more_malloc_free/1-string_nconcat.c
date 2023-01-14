#include "main.h"
#include<stdlib.h>

/**
 * _strlen - A func that prints the length of a string
 * @str: The length of the string
 * Return: The total number of char in the string
 */

char _strlen(char *str)
{
	unsigned int l;

	for (l = 0; str[l] != '\0'; l++)
	{}
	return (l);
}

/**
 * string_nconcat - A func that concatenates two string
 * @s1: First string input
 * @s2: Second string input
 * @n: length of s2 to be printed
 * Return: A point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptstr;
	unsigned int length2, sostr, sostr1, sostr2, count;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	sostr1 = _strlen(s1);
	sostr2 = _strlen(s2);

	if (n >= sostr2)
	{
		length2 = sostr2;
	}
	else
	{
		length2 = n;
	}
	sostr = sostr1 + length2 + 1;
	ptstr = malloc(sostr * sizeof(char));

	if (ptstr == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < sostr1; count++)
	{
		ptstr[count] = s1[count];
	}
	for (count = 0; count < length2; count++)
	{
		ptstr[sostr1 + count] = s2[count];
	}
	ptstr[sostr - 1] = '\0';
	return (ptstr);
}
