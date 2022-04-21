#include "lists.h"
#include <stdio.h>
/**
 * print_list - A function that prints a linked list
 * @h: pointer t  head of list
 * Return: number of nodes in list as size_t
 */[A[A[C[C[C[C[A[A[C[C[C[C[C[C[C[C[C[B[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C Print a linked list[C[C[C[C[C[C[C[C[C[C[C[C
[B[B[C[C[C
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
