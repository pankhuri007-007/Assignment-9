#include <stdio.h>

void ascending(int *arr, int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

void descending(int *arr, int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(arr + i) < *(arr + j)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

void display(int *arr, int n) {
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", *(arr + i));

    printf("\n");
}

int main() {
    int arr[100], n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ascending(arr, n);
    printf("Ascending order: ");
    display(arr, n);

    descending(arr, n);
    printf("Descending order: ");
    display(arr, n);

    return 0;
}