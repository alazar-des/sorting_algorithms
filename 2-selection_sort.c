#include <stdlib.h>
#include "sort.h"

/**
 * swaps - swap to integers
 * @a: first integer input
 * @b: second integer input
 */
void swaps(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - bubble sort algorithm
 * @array: array to be sorted
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t min_idx, i, j, swap_bool;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		swap_bool = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[min_idx] > array[j])
			{
				min_idx = j;
				swap_bool = 1;
			}
		}
		if (swap_bool)
		{
			swaps(&array[i], &array[min_idx]);
			print_array(array, size);
		}
	}
}
