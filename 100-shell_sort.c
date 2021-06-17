#include "sort.h"

/**
 * shell_sort - sorts an array using the Shell sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */

void shell_sort(int *array, size_t size)
{
int inner, outer, valueToInsert;
int interval = 1;
int elements = (int)size;

if (!array || !size || size < 2)
return;

while (interval <= elements / 3)
{
interval = interval * 3 + 1;
}
while (interval > 0)
{
for (outer = interval; outer < elements; outer++)
{
valueToInsert = array[outer];
inner = outer;

while (inner > interval - 1 && array[inner - interval] >= valueToInsert)
{
array[inner] = array[inner - interval];
inner -= interval;
}
array[inner] = valueToInsert;
}
interval = interval / 3;
print_array(array, size);
}
}
