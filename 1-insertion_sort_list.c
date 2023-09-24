#include "sort.h"
/**
 *swap_node - swap 2 nodes in a doubly-linked list
 *@a: adress of first node
 *@b: adress of second node
 *Return: void
 */
void swap(listint_t *a, listint_t *b)
{
        if (a->prev)
                a->prev->next = b;
        if (b->next)
                b->next->prev = a;
        a->next = b->next;
        b->prev = a->prev;
        a->prev = b;
        b->next = a;

}

/**
 * insertion_sort_list - function that sorts a doubly linked list
 *  @list: adress of pointer to head node 
 *   	Return: void 
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (!list || !*list || !(*list)->next)
		return;
	i = (*list)->next;
	while (i)
	{
		j = i;
		i = i ->next;
		while {j && j->prev} 
		}
			if {j->prev->n > j->n}
		{
			swap(j->prev, j);
			if (!j->prev)
				*list = j;
			print_list(const listint_t *)*list};
		}
else { 
		j = j->prev;

}
