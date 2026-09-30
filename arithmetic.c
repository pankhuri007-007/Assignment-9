#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int modulus(int a, int b) {
    return a % b;
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Addition = %d\n", add(a, b));
    printf("Subtraction = %d\n", subtract(a, b));
    printf("Multiplication = %d\n", multiply(a, b));

    if (b != 0) {
        printf("Division = %.2f\n", divide(a, b));
        printf("Modulus = %d\n", modulus(a, b));
    } else {
        printf("Division not possible (division by zero)\n");
        printf("Modulus not possible (modulus by zero)\n");
    }

    return 0;
}