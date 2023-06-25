#include "sort.h"

/**
 * bubble_sort - Sorting Algorithm
 * @array: The array to be sorted.
 * @size: The size of the array to be sorted.
 *
 * The bubble-sort algorithm for sorting an array of integers.
 *
 * Return: Nothing.
 */

void insertion_sort_list(listint_t **list)
{
    listint_t *head, *foo, *bar;

    head = *list;
    foo = head;
    bar = head->next;

    if (foo->n > bar->n)
    {
        bar->prev->next = bar->next;
        bar->next->prev = bar->prev;
        bar->prev = foo->prev;
        bar->next = foo;
        foo->prev->next = bar;
        foo->prev = bar;
    }
}
