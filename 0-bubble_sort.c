#include "sort.h"
/**
 * bubble_sort - sort array elements from minimum to maximum value
 * @array: an array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

size_ti, index, tmp = 0;

if (size < 2)
return;
for (i = 0; i < size; i++)
for (index = 0; index < size; index++)
{
if (array[index] > array[index + 1] && array[index + 1])
{
tmp = array[index];
array[index] = array[index + 1];
array[index + 1] = tmp;
print_array(array, size);
}
}
}
