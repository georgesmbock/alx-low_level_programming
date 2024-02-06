#include<lists.h>

/**
 * print_listint - prints all element
 * @h:head of linkeg
 * -
 * Return:number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		print("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count)
}
