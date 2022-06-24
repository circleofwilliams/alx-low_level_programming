#include <stdio.h>

/**
*main - prints the number of arguments
*@argc: number of arguments from command line
*@argv: array of command line arguments
*Return: 0 is success
*/

int main(int argc, char **argv)
{
	(void) (**argv);
	printf("%d\n", argc);
	return (0);
}
