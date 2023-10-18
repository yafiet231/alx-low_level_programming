#include "main.h"
#include <stdio.h>

/**
  * _strcat - Concatenates two strings
  * @dest: input value
  * @src: input value
  *
  * Return: void
  */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j]n = src[j];
			{

			dest[i] = src[j];
			i++;
			j++;
			}

			dest[j] = '\0';
			return (dest);
			}
