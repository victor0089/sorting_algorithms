#include <stdio.h>

void print_array(int *array, size_t size) {
    size_t i;
    
    for (i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i != size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

void selection_sort(int *array, size_t size) {
    size_t i, j;
    
    for (i = 0; i < size - 1; i++) {
        size_t min_index = i;
        
        for (j = i + 1; j < size; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        
        if (min_index != i) {
            int temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
        }
        
        print_array(array, size);
    }
}

int main(void) {
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    selection_sort(array, n);
    printf("\n");
    print_array(array, n);
    
    return 0;
}
