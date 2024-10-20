// C Program to print Array of strings with array of pointers
#include <stdio.h>

int main() {
    // Declare an array of pointers to characters
    char* arr[] = { "geek", "Geeks", "Geeksfor" };

    // Print each string and its address
    for (int i = 0; i < 3; i++) {
        printf("%s\n", arr[i]);
    }

    // Print addresses of each string
    for (int i = 0; i < 3; i++) {
        printf("Address of arr[%d]: %p\n", i, (*arr[i]));
    }

    return 0;
}
