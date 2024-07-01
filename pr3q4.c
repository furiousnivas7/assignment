// Pratical 3 Question no 4
#include <stdio.h>

// Function to calculate sum, difference, and division
void Calculate(int x, int y){
    // Calculate the sum of x and y
    int sum = x + y;
    
    // Declare variable to store the difference
    int sub;

    // Calculate the difference between x and y
    if (x > y){
        sub = x - y; // If x is greater, subtract y from x
    }
    else{
        sub = y - x; // If y is greater, subtract x from y
    }

    // Calculate the division of x by y
    // 
    float divide = x / y;

    // Print the results
    printf("Sum : %d", sum);
    printf("\nSubtract : %d", sub);
    printf("\nDivision : %.2f", divide); 
}

int main(){
    // Declare variables to store user input
    int a, b;
    
    // asked to enter the first number
    printf("Enter 1st number: ");
    scanf("%d", &a);
    
    // asked to enter the second number
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    // call calc Function
    Calculate(a, b);
    
    return 0; 
}
