//Pratical 2 Question 4
#include <stdio.h>

int main() {    
    // Declare variables
    int distance;
    float fuel;
    
    // Assign test data values
    distance = 350; // Total distance traveled in kilometers
    fuel = 5; // Total fuel spent in liters
    
    // Calculate the average consumption
    float averageConsumption = distance / fuel;
    
    // Print the average consumption with three decimal places
    printf("Average consumption (km/lt): %.3f\n", averageConsumption);

   
    return 0;
}
