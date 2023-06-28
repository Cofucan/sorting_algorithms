#include "sort.h"

void quick_sort_recursion(int *array, size_t size, int *o_array, size_t o_size);

/**
 * selection_sort - Sorting Algorithm
 * @array: The array to be sorted.
 * @size: The size of the array to be sorted.
 *
 * A selection-sort algorithm for sorting an array of integers.
 *
 * Return: Nothing.
 */

void quick_sort(int *array, size_t size)
{
	quick_sort_recursion(array, size, array, size);
}

void quick_sort_recursion(int *array, size_t size, int *o_array, size_t o_size)
{
	size_t cursor_idx, pivot_idx, swap_idx;
	int hold, left_size, right_size;

	if (array == NULL || size < 2)
		return;

	pivot_idx = size - 1;
	cursor_idx = 0;
	swap_idx = -1;

	while (cursor_idx <= pivot_idx)
	{
		if (array[cursor_idx] <= array[pivot_idx])
		{
			swap_idx++;
			if (cursor_idx > swap_idx)
			{
				hold = array[cursor_idx];
				array[cursor_idx] = array[swap_idx];
				array[swap_idx] = hold;
				print_array(o_array, o_size);
			}
		}
		cursor_idx++;
	}

	left_size = swap_idx;
	right_size = size - swap_idx - 1;

	quick_sort_recursion(array, left_size, o_array, o_size);
	quick_sort_recursion(array + swap_idx + 1, right_size, o_array, o_size);
}
