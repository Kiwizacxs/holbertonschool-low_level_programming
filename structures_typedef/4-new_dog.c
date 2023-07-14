#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

dog_t
*new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	new->name =  name;
	new->age = age;
	new->owner = owner;
	return (new);
}
