#include "dog.h"

/**
*free_dog - free dog
*@d: struct dog
*/

vod free_dog(dog_t *d)
{
	if (d)
	{
		free(*d);
	}
}
