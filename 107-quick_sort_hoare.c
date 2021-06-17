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
 * partition_hoare - partitions an array using Hoare's scheme
 * @array: array to be partitioned
 * @start: first value of the array(int)
 * @end: last value of the array(int)
 * @size: size of array(size_t)
 * Return: index of the pivot(int)
 */

int partition_hoare(int *array, int start, int end, size_t size)
{
int pivot = array[start], lIdx = start - 1, rIdx = end + 1;

while (1)
{
do {
lIdx++;
} while (array[lIdx] < pivot);
do {
rIdx--;
} while (array[rIdx] > pivot);
if (lIdx < rIdx)
{
swap(&array[lIdx], &array[rIdx]);
print_array(array, size);
}
else
{
return (rIdx);
}
}

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
pIdx = partition_hoare(array, start, end, size);
quickSort(array, start, pIdx - 1, size);
quickSort(array, pIdx + 1, end, size);
}
}

/**
 * quick_sort_hoare - utilises hoare's quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */
void quick_sort_hoare(int *array, size_t size)
{
int start = 0, end = size - 1;

quickSort(array, start, end, size);
}
