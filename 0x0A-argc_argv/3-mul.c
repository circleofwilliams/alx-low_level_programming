#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the mul of two numbers
*@argc: arguments number
*@argv: arguments array
*Return: success or error
*/

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
