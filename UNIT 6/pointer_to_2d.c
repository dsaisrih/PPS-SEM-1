#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};  // 2D array

    // Pointer to a 2D array (an array of 3 integers)
    int (*ptr)[3] = arr;

    // Access the 2D array using the pointer
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: %d\n", i, j, ptr[i][j]);  // ptr[i][j] accesses 2D array elements
        }
    }

    return 0;
}
