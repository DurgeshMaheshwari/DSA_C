#include <stdio.h>

int main() {
    int n, target, i, found = 0;

    // Taking input for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array

    // Taking input for array elements
    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking input for the element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Linear Search Logic
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element %d found at index %d (position %d).\n", target, i, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
