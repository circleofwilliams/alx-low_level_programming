#ifndef _dog_h_
#define _dog_h_

#include <stdio.h>
#include <stdlib.h>

/**
*struct dog - maked a dog model
*@name: name of the dog
*@age: age of the dog
*@owner: owner's name
*Description: struct called dog to make a model
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
