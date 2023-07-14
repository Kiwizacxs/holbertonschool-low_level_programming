#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

dog_t
*new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	new->name = malloc(strlen(name) + 1);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc(strlen(owner) + 1);
	if (!new->owner)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->age = age;
	strcpy(new->name, name);
	strcpy(new->owner, owner);
	return (new);
}
