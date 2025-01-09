#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Maximum size of stack

// Global array to hold the stack elements
int stack[MAX];

// Variable to keep track of the top element of the stack
int top = -1;  // Stack is initially empty

// Function to check if the stack is full
int isFull() {
    return top == MAX - 1;
}

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Function to push an element onto the stack
void push() {
    int value;
    if (isFull()) {
        printf("Stack Overflow: Cannot push, stack is full.\n");
    } else {
        printf("Enter the value to push: ");
        scanf("%d", &value);
        stack[++top] = value;  // Increment top and insert value
        printf("%d pushed to stack.\n", value);
    }
}

// Function to pop an element from the stack
void pop() {
    if (isEmpty()) {
        printf("Stack Underflow: Stack is empty.\n");
    } else {
        int poppedValue = stack[top--];  // Return top value and decrement top
        printf("%d popped from stack.\n", poppedValue);
    }
}

// Function to view the top element of the stack
void peek() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
    } else {
        printf("Top element is %d\n", stack[top]);
    }
}

// Function to display the stack elements
void display() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        int i;
        for (i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    int choice;

    do {
        // Menu for the user
        printf("\nStack Operations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display Stack\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Switch statement to handle user choice
        switch (choice) {
            case 1:  // Push operation
                push();
                break;

            case 2:  // Pop operation
                pop();
                break;

            case 3:  // Peek operation
                peek();
                break;

            case 4:  // Display stack
                display();
                break;

            case 5:  // Exit
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
                break;
        }
    } while (choice != 5);  // Continue until the user chooses to exit

    return 0;
}
