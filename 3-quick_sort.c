#include "sort.h"

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
			}
		}
		cursor_idx++;
	}
	print_array(array, size);

	left_size = swap_idx;
	right_size = size - swap_idx;

	quick_sort(array, left_size);
	quick_sort(array + swap_idx + 1, right_size);
}
