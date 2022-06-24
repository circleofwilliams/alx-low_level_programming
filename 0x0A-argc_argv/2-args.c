#include <stdio.h>

/**
*main - prints all arguments it recieves
*@argv: array of characters
*/

int main(int argc, char **argv)
{
	int i;
	(void) (argc);

	for (i = 0; agrv[i]; i++)
	{
		printf("%s\n", argv[i]);
		return (0);
	}
}
