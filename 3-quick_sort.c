#include "sort.h"

void swap(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}

int partition_lomuto(int *array, int start, int end, size_t size)
{
int pivot = array[end], pIdx = start, i;

for (i = start; i < end; i++)
{
if (array[i] <= pivot)
{
swap(&array[i], &array[pIdx]);
print_array(array, size);
pIdx++;
}
}
swap(&array[pIdx], &array[end]);
return pIdx;
}

void quick_sort_lomuto(int *array, int start, int end, size_t size)
{
int pIdx;

if (start < end)
{
pIdx = partition_lomuto(array, start, end, size);
quick_sort_lomuto(array, start, pIdx -1, size);
quick_sort_lomuto(array, pIdx + 1, end, size);
}
}

void quick_sort(int *array, size_t size)
{
int start = 0, end = size - 1;

quick_sort_lomuto(array, start, end, size);
}
