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
    listint_t *head, *foo, *bar, *unsorted;

    head = *list;
    unsorted = head;

    while (unsorted->next)
    {
        unsorted = unsorted->next;
        foo = unsorted->prev;

        while (foo)
        {
            if ((foo->n > unsorted->n) && (foo->prev == NULL || foo->prev->n <= unsorted->n))
                break;
            foo = foo->prev;
        }

        if (foo)
        {
            bar = unsorted;
            unsorted = unsorted->prev;
            bar->prev->next = bar->next;
            if (bar->next)
                bar->next->prev = bar->prev;
            bar->prev = foo->prev;
            bar->next = foo;
            if (foo->prev)
                foo->prev->next = bar;
            else
                head = bar;
            foo->prev = bar;
            print_list(head);
        }
    }
}
