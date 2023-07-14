#include "dog.h"
#include <stdio.h>

void
print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	printf("Name: %s\n", d->name);
	if (d->age == '\0')
		printf("(nil)\n");
	else
		printf("Age: %1f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
