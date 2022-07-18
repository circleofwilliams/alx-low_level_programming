#ifndef lists_h
#define lists_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
* struct listint_s - singly linked list
* @n: integer
* @next: points to the next node
* Description: singly linked list node structure
*/

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _putchar(char);
size_t print_listint(const listint *h);

#endif
