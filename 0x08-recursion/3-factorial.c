#include "main.h"

/**
*factorial - finds factorial of numbers
*@n: number to be found
*Return: factorial
*/

int factorial(int n)
{
    if (n == 0)
	return (1);
    else if (n > 0)
	return (n * factorial(n - 1));
    else
	return (-1);
}
