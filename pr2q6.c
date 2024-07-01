// Practical 2 Question 6
#include <stdio.h>

// Define a constant 
const double PI = 3.14159;

// Function to calculate the volume of a cylinder
double calculateVolumeOfCylinder(double radius, double height){
    double volumeofCylinder;
    // Calculate the volume using 
    volumeofCylinder = PI * radius * radius * height;
    return volumeofCylinder; 
}

int main(){
    // Declare variables
    double radius, height, cylinderVolume;
    
    // Asked  to enter the radius 
    printf("Enter the radius of the base: ");
    scanf("%lf", &radius);

    // Ask the user to enter the height 
    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Call the function to calculate the volume of the cylinder and store the output in cylinderVolume
    cylinderVolume = calculateVolumeOfCylinder(radius, height);

    // Print the calculated volume of the cylinder
    printf("The volume of the cylinder is: %lf\n", cylinderVolume);

    return 0; 
}
