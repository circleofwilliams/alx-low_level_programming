#include "main.h"

int _abs(int c)
{
	if (c > 0)
		return (c);
	else if (c < 0)
		return (-1 * c);
	else
		return (0);
}
