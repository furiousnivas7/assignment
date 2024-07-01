//Pratical 3 Question 5
#include <stdio.h>

// Function to calculate the perimeter and area of a square
void SqrDm(int x){
    // Calculate the perimeter of the square
    int PS = 4 * x; // Perimeter of Square
    
    // Calculate the area of the square
    int AS = x * x; // Area of Square

    // Print the perimeter of the square
    printf("Perimeter of Square : %d", PS);
    
    // Print the area of the square
    printf("\nArea of Square : %d", AS); 
}

// Function to calculate the perimeter and area of a rectangle
void RecDm(int y, int z){
    // Calculate the perimeter of the rectangle
    int PR = 2 * y + 2 * z; // Perimeter of Rectangle
    
    // Calculate the area of the rectangle
    int AR = y * z; // Area of Rectangle 

    // Print the perimeter of the rectangle
    printf("\nPerimeter of Rectangle : %d", PR); 
    
    // Print the area of the rectangle
    printf("\nArea of Rectangle : %d", AR);
} 

int main(){
    // Declare variables to store the user's input
    int a, b, c;
    
    // Prompt the user to enter the length of the square
    printf("Enter length of square: ");
    scanf("%d", &a);
    
    // Prompt the user to enter the length of the rectangle
    printf("Enter length of rectangle: ");
    scanf("%d", &b);
    
    // Prompt the user to enter the width of the rectangle
    printf("Enter width of rectangle: ");
    scanf("%d", &c);

    // Call the SqrDm function to calculate and print the dimensions of the square
    SqrDm(a); // Square Dimension
    
    // Call the RecDm function to calculate and print the dimensions of the rectangle
    RecDm(b, c); 
    
   
    return 0;
}
