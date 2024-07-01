// Pratical 3 Question 10
#include <stdio.h>

// Function to find the largest of three numbers
int largeNumber(int x, int y, int z) {
    // Check if x is greater than both y and z
    if (x > y) {
        if (x > z) {
            return x; // x is the largest
        }
        // If the above condition is not true, check else if y is greater than z
        else if (y > z) {
            return y; // y is the largest
        } else {
            return z; // z is the largest
        }
    }
}

int main() {
    // Declare variables    
    int a, b, c;
    
    // asked to enter the first number
    printf("Enter 1st number: ");
    scanf("%d", &a);
    
    // asked to enter the second number
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    
    // asked to enter the third number
    printf("Enter 3rd number: ");
    scanf("%d", &c);

    // Call the largeNumber function and print the largest number
    printf("%d", largeNumber(a, b, c));
    
    
    return 0;
}
