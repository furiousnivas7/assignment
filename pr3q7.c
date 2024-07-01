//Pratical 3 Question 7
#include <stdio.h>

// Function to calculate the sum and average of two numbers
void AddandAvg(float x, float y){
    // Calculate the sum of x and y
    float sum = x + y;
    
    // Calculate the average of x and y
    float avg = sum / 2;

    // Print the total sum
    printf("Total is : %.2f", sum);
    
    // Print the average
    printf("\nAverage is: %.2f", avg);
}

int main(){
    // Declare variables to store user input
    float a, b;
    
    // asked  to enter the first number
    printf("Enter 1st number: ");
    scanf("%f", &a);
    
    // asked to enter the second number
    printf("Enter 2nd number: ");
    scanf("%f", &b);

    // Call the AddandAvg function with user input
    AddandAvg(a, b);
    
  
    return 0;
}
