#include "sort.h"
/**
 * counting_sort - sorts an array of integers in ascending order
 * using the Counting sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: Nothing
 */
void counting_sort(int *array, size_t size)
{
int max, i, j, k;
int *count, *output;
if (array == NULL || size < 2)
return;
max = array[0];
for (i = 1; i < (int)size; i++)
{
if (array[i] > max)
max = array[i];
}
count = malloc(sizeof(int) * (max + 1));
output = malloc(sizeof(int) * size);
if (count == NULL || output == NULL)
return;
for (i = 0; i <= max; i++)
count[i] = 0;
for (j = 0; j < (int)size; j++)
count[array[j]]++;
for (i = 1; i <= max; i++)
count[i] += count[i - 1];
print_array(count, max + 1);
for (j = size - 1; j >= 0; j--)
{
output[count[array[j]] - 1] = array[j];
count[array[j]]--;
}
for (k = 0; k < (int)size; k++)
array[k] = output[k];
free(count);
free(output);
}
