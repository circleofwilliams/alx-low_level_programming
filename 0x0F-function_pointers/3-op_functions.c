#include "3-calc.h"

/**
*op_add - finds sum
*@a: integer 1
*@b: integer 2
*Return: the sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - subtracts
*@a: integer 1
*@b: integer 2
*Return: result
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - multiplys number
*@a: integer 1
*@b: integer 2
*Return: result
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - divides tow numbers
*@a: integer 1
*@b: integer 2
*Return: result
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
*op_mod - finds remainder
*@a: integer 1
*@b: integer 2
*Return: remainder
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
