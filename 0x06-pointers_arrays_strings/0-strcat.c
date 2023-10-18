#include "main.h"
#include <stdio.h>

/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int j = 0, i;

	while (dest[j])
	{
		j++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[j] = src[i];
		j++;
	}

	dest[j] = '\0';
	return (dest);
}
