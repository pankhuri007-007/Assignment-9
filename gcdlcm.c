#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b, c;
    int gcdThree, lcmThree;

    printf("Enter three positive integers: ");
    scanf("%d %d %d", &a, &b, &c);

    gcdThree = gcd(gcd(a, b), c);
    lcmThree = lcm(lcm(a, b), c);

    printf("GCD = %d\n", gcdThree);
    printf("LCM = %d\n", lcmThree);

    return 0;
}