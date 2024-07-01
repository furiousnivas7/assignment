// Pratical 2 Question 5
#include <stdio.h>

// Function to calculate the volume 
double calculateVolumeOfCube(double sideLength){
    double volumeofCube;
    // Calculate the volume 
    volumeofCube = sideLength * sideLength * sideLength;
    return volumeofCube; 
}

int main(){
    // Declare variable
    double lengthofSide, cubeVolume;
    
    // asked to enter the length of the side of the cube
    printf("Enter the length of the side: ");
    scanf("%lf", &lengthofSide);

    // Call the function to calculate the volume of the cube and store the output in cubeVolume
    cubeVolume = calculateVolumeOfCube(lengthofSide);

    // Print the calculated volume of the cube
    printf("The volume of the cube is: %lf\n", cubeVolume);

    return 0; 
}
