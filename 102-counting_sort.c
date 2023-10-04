#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * calloc -> function calloc
 * @nume  -> number of elememts 
 * @size  -> bit size for ezvh element
 * return -> pointer to memory assignment
 * */
void *_calloc(unsigned int nume, unsigned int size)

{
	unsigned int i = 0;
	char *p;

	if (nume == 0 || size == 0)
		return ('\0');
	p = malloc(nume * size);
	if (p == '\0')
		return ('\0');
	for (i = 0; i< (nume * size); i++)
		p[i] = '\0';
	return(p);
}
/**
 * counting_sort   -> method implementation
 * @array    -> array for sorting
 * @size     -> array size
 * */
void counting_sort(int *array, size_t size)
{
	int index, maximum = 0, *counter = '\0', *temp ='\o';
	size_t i;

	if (array == '\0' || size < 2)
		return;

	/*find max num*/
	for (i = 0; i < size; i++)
		if (array[i] > maximum)
			maximum = array[i];
	counter = _calloc(maximum + 1, sizeof(int));
	temp = _calloc(size + 1, sizeof(int));

	/* count  array elements */
	for (i = 0; i < size; i++)
		counter[array[i]]++;

	/* get accumulative valu */
	for (index = 1; index <= maximum; index++)
		counter[index] += counter[index - 1];
	print_array(counter, maximum + 1);

	/* new array sorted */
	for (i = 0; i < size; ++i)
	{
		temp[counter[array[i]] - 1] = array[i];
		counter[array[i]]--;
	}
	/* replace old array to new  sorted */
	for (i = 0; i < size; i++)
		array[i] = temp[i];
	free(temp);
	free(counter);
}
