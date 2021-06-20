#include "sort.h"

/**
 * swap - swaps two integers
 * @a: int pointer
 * @b: int pointer
 * Return: void
 */
void swap(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}

/**
 * partition_lomuto - partitions an array using Lomuto's scheme
 * @array: array to be partitioned
 * @start: first value of the array(int)
 * @end: last value of the array(int)
 * @size: size of array(size_t)
 * Return: index of the pivot(int)
 */

int partition_lomuto(int *array, int start, int end, size_t size)
{
int pivot = array[end], pIdx = start, i;

for (i = start; i < end; i++)
{
if (array[i] <= pivot)
{
if (array[i] != array[pIdx])
{
swap(&array[i], &array[pIdx]);
print_array(array, size);
}
pIdx++;
}
}
if (array[end] != array[pIdx])
{
swap(&array[pIdx], &array[end]);
print_array(array, size);
}
return (pIdx);
}

/**
 * quickSort - recursively sorts an array
 * @array: array to be sorted
 * @start: first value of the array(int)
 * @end: last value of the array(int)
 * @size: size of the array(size_t)
 * Return: void
 */
void quickSort(int *array, int start, int end, size_t size)
{
int pIdx;

if (start < end)
{
pIdx = partition_lomuto(array, start, end, size);
quickSort(array, start, pIdx - 1, size);
quickSort(array, pIdx + 1, end, size);
}
}

/**
 * quick_sort - utilises lomuto's quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
int start = 0, end = size - 1;

quickSort(array, start, end, size);
}
