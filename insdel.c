#include <stdio.h>

void display(int arr[], int n) {
    int i;
    printf("Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void insert(int arr[], int *n, int value, int pos) {
    int i;

    for (i = *n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    (*n)++;
}

void deleteElement(int arr[], int *n, int pos, int *deleted) {
    int i;

    *deleted = arr[pos];

    for (i = pos; i < *n - 1; i++)
        arr[i] = arr[i + 1];

    (*n)--;
}

int main() {
    int arr[100], n, i;
    int choice, value, pos, deleted;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n1. Display");
        printf("\n2. Insert");
        printf("\n3. Delete");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            display(arr, n);
            break;

        case 2:
            printf("Enter value to insert: ");
            scanf("%d", &value);

            printf("Enter position (0 to %d): ", n);
            scanf("%d", &pos);

            if (pos >= 0 && pos <= n) {
                insert(arr, &n, value, pos);
                printf("Element inserted.\n");
            } else {
                printf("Invalid position.\n");
            }
            break;

        case 3:
            printf("Enter position to delete (0 to %d): ", n - 1);
            scanf("%d", &pos);

            if (pos >= 0 && pos < n) {
                deleteElement(arr, &n, pos, &deleted);
                printf("Deleted value = %d\n", deleted);
            } else {
                printf("Invalid position.\n");
            }
            break;

        case 4:
            printf("Program ended.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}