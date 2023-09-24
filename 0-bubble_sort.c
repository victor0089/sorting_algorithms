#include "sort.h"
/**
 * bubble_sort - sort arrayelementsfrom min to max value
 * @array:array
 * @size:arraysize
 */
void bubble_sort(int *array, size_t size) {
    size_t i, j;
    
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        print_array(array, size);
    }
}

