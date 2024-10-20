// C program to illustrate the use of array of pointers to
// function
#include <stdio.h>

// some basic arithmetic operations
void add(int a, int b) {
  printf("Sum : %d\n", a + b);
}

void subtract(int a, int b) {
    printf("Difference : %d\n", a - b);
}

void multiply(int a, int b) {
    printf("Product : %d\n", a * b);
}

void divide(int a, int b) {
    printf("Quotient : %d", a / b);
}

int main() {

    int x = 50, y = 5;

    // array of pointers to function of return type int
    void (*arr[4])(int, int)
        = { &add, &subtract, &multiply, &divide };
    for (int i = 0; i < 4; i++) {
        arr[i](x, y);
    }
    return 0;
}
