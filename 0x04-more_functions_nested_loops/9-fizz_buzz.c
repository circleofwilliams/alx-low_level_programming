#include "main.h"

/**
*main - prints digits and fizzbuzz
*Return: always 0
*/

int main(void)
{
	int i;

	i = 1;

	printf("%d ", n);
	for (i = 2; i <= 100; i++)
	{
		if ((i % 15) == 0)
		{
			printf(" FizzBuzz");
		}
		else if ((i % 5) == 0)
		{
			printf(" Buzz");
		}
		else if ((i % 3) == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
