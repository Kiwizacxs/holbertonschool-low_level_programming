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

	if (!d->age)
		d->age = 0;
	printf("Age: %1f\n", d->age);

	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Owner: %s\n", d->owner);
}
