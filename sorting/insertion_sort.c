#include <stdio.h>
#include <conio.h>  // For getch() function

// Insertion Sort function
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Sorted Array (Insertion Sort): ");
    printArray(arr, n);

    // Wait for a key press before exiting
    printf("\nPress any key to exit...");
    getch();  // Wait for user input
    return 0;
}
