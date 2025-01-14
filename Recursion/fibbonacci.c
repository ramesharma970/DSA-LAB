#include <stdio.h>
#include <conio.h>

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case: 0th Fibonacci number is 0
    } else if (n == 1) {
        return 1; // Base case: 1st Fibonacci number is 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci series up to %d terms:\n", n);
        for (int i = 0; i < n; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }
    getch();
    return 0;
}
