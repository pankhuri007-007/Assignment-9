#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int countDigits(int n) {
    int count = 0;

    if (n == 0)
        return 1;

    while (n != 0) {
        count++;
        n /= 10;
    }

    return count;
}

int reverseNumber(int n) {
    int reverse = 0;

    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    return reverse;
}

int isPalindrome(int n) {
    return n == reverseNumber(n);
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Sum of digits = %d\n", sumOfDigits(n));
    printf("Number of digits = %d\n", countDigits(n));
    printf("Reversed number = %d\n", reverseNumber(n));

    if (isPalindrome(n))
        printf("Palindrome: Yes\n");
    else
        printf("Palindrome: No\n");

    return 0;
}