include"main.h"

/**
 * _abs - computes absolute value
 *
 * Return: absolute value
 *
 * @x: interger to obtain its absolute value
 */

int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -x);
	}
}
