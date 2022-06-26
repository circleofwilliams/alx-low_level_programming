#include "main.h"

int _isdigit(int c)
{
	if (! (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'))
		return (1);
	else
		return ('\0');
			
}
