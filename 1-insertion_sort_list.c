#include <stdio.h>
#include "sort.h"

/**
 * nodes_swap - Swap two nodes in a listint_t double linked list
 * @head: A pointer to a pointer to the head of the linked list
 * @node1: Pointer to a pointer to the first node.
 * @node2: Pointer to the second node.
 * Return: Nothing
 */
void nodes_swap(listint_t **head, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next; /*Update nxt ptr of n1 to n2's nxt n*/

	if (node2->next != NULL) /*If n2 has nxt n, update its prev ptr to n1*/
		node2->next->prev = *node1;

	/*Update ptrs of nodes 2 to 1*/
	node2->prev = (*node1)->prev;
	node2->next = (*node1);

	/*if n1 has prev n, update next ptr to n2*/
	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;
	else
		*head = node2; /*if its the head update to n2*/

	(*node1)->prev = node2;
	*node1 = node2->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of int in ascending order.
 * @list: A pointer to a pointer of a doubly-linked list of integers.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *key, *current;

	/*Check if list is NULL or contains < 2 elements*/
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	/*Iterate through the list for sorting*/
	for (current = (*list)->next; current != NULL; current = temp)
	{
		temp = current->next;
		key = current->prev;

		/*Iterate backwards to find correct position for current node*/
		while (key != NULL && current->n < key->n)
		{
			/*Swap nodes and print after @ swap*/
			nodes_swap(list, &key, current);
			print_list((const listint_t *)*list);


		}
	}
}
