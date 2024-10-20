#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // Declare an array
    int *ptr = arr;  // Pointer to the first element of the array (arr[0])

    // Access array elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));  // *(ptr + i) is equivalent to arr[i]
    }

    return 0;
}
