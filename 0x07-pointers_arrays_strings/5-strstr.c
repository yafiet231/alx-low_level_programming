#include "main.h"

/**
  * _strstr - locate a substring
  * @haystack: the source string
  * @needle: the string to find
  *
  * Return:  a pointer to the beginning of the located substring or null
  */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}

			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}

		i++;
	}

	return ('\0');
}
