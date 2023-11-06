#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: a pointer to the structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int d, e, f;
	dog_t *p;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (d = 0; name[d]; d++)
		;
	for (e = 0; owner[e]; e++)
		;
	p->name = malloc(d + 1);
	p->owner = malloc(e + 1);

	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name), free(p->owner), free(p);
		return (NULL);
	}
	for (f = 0; f < d; f++)
	{
		p->name[f] = name[f];
	}
	p->name[f] = '\0';
	for (f = 0; f < e; f++)
	{
		p->owner[f] = owner[f];
	}
	p->owner[f] = '\0';
	p->age = age;
	return (p);
}
