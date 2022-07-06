#include "function_pointers.h"

/**
*array_iterator - execute a call back function
*@array: array of element
*@size: size of the array
*@action: function pointer
*/

void array_iterator(int *array, size_t, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
