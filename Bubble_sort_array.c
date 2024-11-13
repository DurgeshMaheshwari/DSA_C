#include <stdio.h>

// Function to sort the array using Bubble Sort
void sortArray(int arr[], int n) {

    // Outer loop to traverse the array
    for (int i = 0; i < n - 1; i++) {
     
        int swapped = 0;  

        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++) {
          
            // If the current element is greater than the next element
            if (arr[j] > arr[j + 1]) {
              
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; 
            }
        }

        // If no two elements were swapped by inner loop,
        // then break the loop
        if (!swapped)
            break;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int N = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, N);
    printf("Sorted array: \n");
    printArray(arr, N);
    return 0;
}
