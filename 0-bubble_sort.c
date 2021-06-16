#include <stdlib.h>
#include "sort.h"

/**
 * swap - swap to integers
 * @a: first integer input
 * @b: second integer input
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - bubble sort algorithm
 * @array: array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = size; i > 0; i--)
	{
		for (j = 1; j < i; j++)
		{
			if (array[j] < array[j - 1])
			{
				swap(&array[j], &array[j - 1]);
				print_array(array, size);
			}
		}
	}
}
