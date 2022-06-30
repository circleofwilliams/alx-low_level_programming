#include "main.h"

/**
*array_range - create array of numbers
*@min: minimum
*@max: maximum
*Return: pointer if success, null ohterwise
*/

int *array_range(int min, int max)
{
	int *p;
	int i;

	int j = 0;

	if (min > max)
		return (NULL);

	p = malloc((max-min) + 1);
	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}
	
	return (p);
}
