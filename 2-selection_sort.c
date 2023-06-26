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

void selection_sort(int *array, size_t size)
{
	size_t sort_position, min_position, cursor;
	int hold;

	sort_position = 0;
	min_position = 1;

	while (sort_position < size - 1)
	{
		cursor = sort_position;
		while (cursor < size)
		{
			cursor++;
			if (array[cursor] < array[sort_position])
				min_position = cursor;
		}

		if (array[min_position] < array[sort_position])
		{
			hold = array[min_position];
			array[min_position] = array[sort_position];
			array[sort_position] = hold;
			print_array(array, size);
		}
		sort_position++;
	}
}
