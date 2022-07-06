#include "function_pointers.h"

/**
*print_name - prints a name
*@name: pointer to name
*@f: functio pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
