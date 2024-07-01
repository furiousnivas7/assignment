//Pratical 3 Question 9
#include <stdio.h>

// Function to find the larger of two numbers
int largeNumber(int x, int y) {
    // Compare x and y
    if (x > y) {
        // If x is greater than y, return x
        return x;
    } else {
        // If y is greater than or equal to x, return y
        return y;
    }
}

int main() {
    // Declare variables to store user input
    int a, b;
    
    // Prompt the user to enter the first number
    printf("Enter 1st number: ");
    scanf("%d", &a);
    
    // Prompt the user to enter the second number
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    // Call the largeNo function and print the larger number
    printf("%d", largeNumber(a, b));
    return 0;
}
