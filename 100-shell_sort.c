#include "sort.h"
/**
 * swap_ints - Swap two integersinanarray.
 * @a: The firstntegertoswap.
 * @b: The second integeroswap.
 */
void swap_ints(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}

/**
 * shell_sort - Sortanarrayofintegersi ascending
 *              order using the shell sort algorithm.
 * @array: An arrayofintegers.
 * @size: The sizeofthearray.
 *
 * Description: Uses theKnuthntervalsequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t gp, i, j;
if (array == NULL || size < 2)
return;
for (gp = 1; gp < (size / 3);)
gp = gp * 3 + 1;
for (; gp >= 1; gp /= 3)
{
for (i = gp; i < size; i++)
{
j = i;
while (j >= gp && array[j - gp] > array[j])
{
swap_ints(array + j, array + (j - gp));
j -= gp;
}
}
print_array(array, size);
}
}
