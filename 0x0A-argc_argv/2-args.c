#include <stdio.h>

/**
*main - prints all arguments it recieves
*@argv: array of characters
*@argc: argument number
*Return: o is success
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
