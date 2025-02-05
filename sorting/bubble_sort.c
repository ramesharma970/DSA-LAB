#include <stdio.h>
#include <conio.h>  // For getch() function

// Bubble Sort function
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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

    bubbleSort(arr, n);

    printf("Sorted Array (Bubble Sort): ");
    printArray(arr, n);

    // Wait for a key press before exiting
    printf("\nPress any key to exit...");
    getch();  // Wait for user input
    return 0;
}
