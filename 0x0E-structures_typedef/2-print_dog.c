#include "dog.h"

/**
*print_dog - print a struct dog
*@d: struct dog
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nill)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n, d->age");
		if (!(d->owner))
			printf("Owner: (nill)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
