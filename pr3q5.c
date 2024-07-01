//Pratical 3 Question 5
#include <stdio.h>

// Function to calculate the perimeter and area of a square
void SquareDm(int x){
    // Calculate the perimeter of the square
    int PRIMATER_SQUARE = 4 * x; // Perimeter of Square
    
    // Calculate the area of the square
    int AREA_SQUARE = x * x; // Area of Square

    // Print the perimeter of the square
    printf("Perimeter of Square : %d", PRIMATER_SQUARE);
    
    // Print the area of the square
    printf("\nArea of Square : %d", AREA_SQUARE); 
}

// Function to calculate the perimeter and area of a rectangle
void RectangleDm(int y, int z){
    // Calculate the perimeter of the rectangle
    int RECTANGLE_PRIMATER = 2 * y + 2 * z; // Perimeter of Rectangle
    
    // Calculate the area of the rectangle
    int RECTANGLE_AREA = y * z; // Area of Rectangle 

    // Print the perimeter of the rectangle
    printf("\nPerimeter of Rectangle : %d", RECTANGLE_PRIMATER); 
    
    // Print the area of the rectangle
    printf("\nArea of Rectangle : %d", RECTANGLE_AREA);
} 

int main(){
    // Declare variables 
    int a, b, c;
    
    // asked to enter the length of the square
    printf("Enter length of square: ");
    scanf("%d", &a);
    
    // asked to enter the length of the rectangle
    printf("Enter length of rectangle: ");
    scanf("%d", &b);
    
    // asked to enter the width of the rectangle
    printf("Enter width of rectangle: ");
    scanf("%d", &c);

    // Call the SquareDm function to calculate and print the dimensions of the square
    SquareDm(a); // Square Dimension
    
    // Call the RectangleDm function to calculate and print the dimensions of the rectangle
    RectangleDm(b, c); 
    
   
    return 0;
}
