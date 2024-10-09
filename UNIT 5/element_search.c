#include <stdio.h>

int linearSearch(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 8;

    int index = linearSearch(arr, size, element);

    if (index != -1) {
        printf("Element %d found at index %d\n", element, index);
    } else {
        printf("Element %d not found\n", element);
    }

    return 0;
}