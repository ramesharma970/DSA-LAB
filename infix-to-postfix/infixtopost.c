#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // For isdigit function

#define MAX 100

// Stack data structure
char stack[MAX];
int top = -1;

// Function to check if the character is an operator
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

// Function to get precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') 
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

// Function to perform the infix to postfix conversion
void infixToPostfix(char* infix, char* postfix) {
    int i, k = 0;
    char current;

    for (i = 0; infix[i] != '\0'; i++) {
        current = infix[i];

        // If the character is an operand, add it to the postfix expression
        if (isalnum(current)) {
            postfix[k++] = current;
        }
        // If the character is '(', push it to the stack
        else if (current == '(') {
            stack[++top] = current;
        }
        // If the character is ')', pop from the stack until '(' is found
        else if (current == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[k++] = stack[top--];
            }
            top--;  // Pop the '('
        }
        // If the character is an operator
        else if (isOperator(current)) {
            while (top != -1 && precedence(stack[top]) >= precedence(current)) {
                postfix[k++] = stack[top--];
            }
            stack[++top] = current;
        }
    }

    // Pop all the remaining operators in the stack
    while (top != -1) {
        postfix[k++] = stack[top--];
    }
    postfix[k] = '\0';  // Null-terminate the postfix expression
}

int main() {
    char infix[MAX], postfix[MAX];

    // Read the infix expression
    printf("Enter an infix expression: ");
    scanf("%s", infix);

    // Convert infix to postfix
    infixToPostfix(infix, postfix);

    // Print the postfix expression
    printf("Postfix expression: %s\n", postfix);

    // Wait for user input to close the window
    printf("Press any key to exit...");
    getchar();  // This will consume the leftover newline character
    getchar();  // Wait for a key press

    return 0;
}
