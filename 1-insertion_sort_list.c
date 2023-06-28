#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: pointer to head of list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *temp;

if (list == NULL || (*list)->next == NULL)
return;

temp = (*list)->next;
while (temp)
{
while ((temp->prev) && (temp->prev->n > temp->n))
{
temp = swap_node(temp, list);
print_list(*list);
}
temp = temp->next;
}
}

/**
 * swap_node - swap nodes
 * @temp: the node
 * @list: pointer to head of linked list
 * Return: pointer to node
 */
listint_t *swap_node(listint_t *temp, listint_t **list)
{
listint_t *previous = temp->prev;
listint_t *current = temp;

previous->next = current->next;
if (current->next)
current->next->prev = previous;
current->next = previous;
current->prev = previous->prev;
previous->prev = current;

if (current->prev)
{
current->prev->next = current;
else
*list = current;
}
return (current);
}
