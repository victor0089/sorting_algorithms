#include "sort.h"

/**
*swap - the positions of two elements into an array
*@array: array
*@item1: array element
*@item2: array element
*/

void swap(int *array, int item0, int item1)
{


	int temp;
	temp = array[item0];
	array[item0] = array[item1];
	array[item1] = temp;

}
/**
 * shell_sort - function that sorts an array ascending order
 * using the kneuth sequence
 * @size: array size
 * @array: list with numbers
 */
void shell_sort(int *array, size_t size)

{
	size_t gap = 1, i, index = 0;
	if( array == NULL || size < 2)
		return;
	while (gap < size / 3)
		gap = 3 * gap + 1;
	while (gap >= 1)
	
	{
		for (i = gap; i < size; i++)
			for (index = i; index >= gap &&
					(array[index]< array[index - gap]);index -= gap)
				swap(array, index, index - gap);
		print_array(array, size);
		gap /= 3;
	}
}
