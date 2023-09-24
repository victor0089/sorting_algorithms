#include "sort.h"

/**
 * selection_sort - sorts an array of integers 
 * @array: array of integers to be sorted
 * @size: amount of elements in array
 */
void selection_sort(int *array, size_t size)
{
	int i, k, min_k, temp, n = (int)size;

	if (!array || size < 2)
		return;

	/* at every position in the n-member array */
	for (i = 0; i < n - 1; i++)
	{
		/* scan from that position to the end, */
		min_k = i;
		for (k = i + 1; k < n; k++)
		{
			/* determine the minimum value in that range */
			if (array[k] < array[min_k])
			{
				min_k = k;
			}
		}
		/* and if it is lower than the value at start of range, */
		/* swap them */
		if (min_k != i)
		{
			temp = array[i];
			array[i] = array[min_k];
			array[min_k] = temp;
			print_array(array, size);
		}
	}
}
