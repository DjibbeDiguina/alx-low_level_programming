#include <stdio.h>

int advanced_binary_recursive(int *array, size_t start, size_t end, int value) {
    if (start <= end) {
        size_t mid = (start + end) / 2;

        printf("Searching in array: ");
        for (size_t i = start; i <= end; i++) {
            printf("%d", array[i]);
            if (i < end) {
                printf(", ");
            }
        }
        printf("\n");

        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            return advanced_binary_recursive(array, mid + 1, end, value);
        } else {
            return advanced_binary_recursive(array, start, mid - 1, value);
        }
    }
    return -1;
}

int advanced_binary(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }
    return advanced_binary_recursive(array, 0, size - 1, value);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 5;
    int index = advanced_binary(arr, size, value);
    if (index != -1) {
        printf("Value %d found at index %d\n", value, index);
    } else {
        printf("Value %d not found in the array\n", value);
    }
    return 0;
}

