#include <stdio.h>

int totalMarks(int a, int b, int c, int d, int e) {
    return a + b + c + d + e;
}

float percentage(int total) {
    return total / 5.0;
}

char grade(float p) {
    if (p >= 90)
        return 'A';
    else if (p >= 80)
        return 'B';
    else if (p >= 70)
        return 'C';
    else if (p >= 60)
        return 'D';
    else
        return 'F';
}

int checkPass(int a, int b, int c, int d, int e) {
    if (a < 40 || b < 40 || c < 40 || d < 40 || e < 40)
        return 0;
    else
        return 1;
}

int main() {
    int m1, m2, m3, m4, m5, total;
    float percent;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = totalMarks(m1, m2, m3, m4, m5);
    percent = percentage(total);

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percent);
    printf("Grade = %c\n", grade(percent));

    if (checkPass(m1, m2, m3, m4, m5))
        printf("Result = Pass\n");
    else
        printf("Result = Fail\n");

    return 0;
}