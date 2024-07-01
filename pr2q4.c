// Practical 2 Question 4
#include <stdio.h>

// Function to calculate the average fuel consumption
float calculateAverageConsumption(int distance, float fuel) {
    return distance / fuel;
}

int main() {
    // Declare variables
    int distance;
    float fuel, averageConsumption;
    
    // Assign test data values
    distance = 350; // Total distance traveled in kilometers
    fuel = 5; // Total fuel spent in liters
    
    // Call the function to calculate the average consumption and store the output in averageConsumption
    averageConsumption = calculateAverageConsumption(distance, fuel);
    
    // Print the average consumption 
    printf("Average consumption (km/lt): %.3f\n", averageConsumption);

    return 0;
}
