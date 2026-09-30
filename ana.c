#include <stdio.h>
#include <limits.h>

int analyze(int arr[], int n, int *smallest, int *secondSmallest,
            int *greatest, int *secondGreatest) {

    int i;

    *smallest = INT_MAX;
    *secondSmallest = INT_MAX;
    *greatest = INT_MIN;
    *secondGreatest = INT_MIN;

    for (i = 0; i < n; i++) {

        if (arr[i] < *smallest) {
            *secondSmallest = *smallest;
            *smallest = arr[i];
        }
        else if (arr[i] > *smallest && arr[i] < *secondSmallest) {
            *secondSmallest = arr[i];
        }

        if (arr[i] > *greatest) {
            *secondGreatest = *greatest;
            *greatest = arr[i];
        }
        else if (arr[i] < *greatest && arr[i] > *secondGreatest) {
            *secondGreatest = arr[i];
        }
    }

    if (*secondSmallest == INT_MAX)
        return 0;

    return 1;
}

int main() {
    int arr[100], n, i;
    int smallest, secondSmallest;
    int greatest, secondGreatest;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (analyze(arr, n, &smallest, &secondSmallest,
                &greatest, &secondGreatest)) {

        printf("Smallest = %d\n", smallest);
        printf("Second Smallest = %d\n", secondSmallest);
        printf("Greatest = %d\n", greatest);
        printf("Second Greatest = %d\n", secondGreatest);
    }
    else {
        printf("Fewer than two distinct values exist.\n");
    }

    return 0;
}