#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: an array of integers to sort
 * @size: the size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, smallest_idx;
	int tmp;

	for (i = 0; i < size; i++)
	{
		smallest_idx = i;
		for (j = i; j < size; j++)
		{
			if (array[smallest_idx] > array[j])
				smallest_idx = j;
		}

		if (smallest_idx != i)
		{
			tmp = array[i];
			array[i] = array[smallest_idx];
			array[smallest_idx] = tmp;
			print_array(array, size);
		}
	}
}
