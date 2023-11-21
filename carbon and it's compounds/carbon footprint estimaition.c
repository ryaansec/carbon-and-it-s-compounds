#include <stdio.h>

// Constants for carbon emissions factors (in kg CO2 per unit)
#define CAR_EMISSION_FACTOR 0.2
#define BUS_EMISSION_FACTOR 0.1
#define TRAIN_EMISSION_FACTOR 0.05
#define ELECTRICITY_EMISSION_FACTOR 0.4

int main() {
    // Variables to store user inputs
    float carDistance, busDistance, trainDistance, electricityUsage;
    
    // Get user input for transportation distances
    printf("Enter the distance traveled by car (in km): ");
    scanf("%f", &carDistance);
    
    printf("Enter the distance traveled by bus (in km): ");
    scanf("%f", &busDistance);
    
    printf("Enter the distance traveled by train (in km): ");
    scanf("%f", &trainDistance);
    
    // Get user input for electricity usage
    printf("Enter monthly electricity usage (in kWh): ");
    scanf("%f", &electricityUsage);
    
    // Calculate carbon footprint
    float carEmission = carDistance * CAR_EMISSION_FACTOR;
    float busEmission = busDistance * BUS_EMISSION_FACTOR;
    float trainEmission = trainDistance * TRAIN_EMISSION_FACTOR;
    float electricityEmission = electricityUsage * ELECTRICITY_EMISSION_FACTOR;
    
    // Sum up individual emissions to get total carbon footprint
    float totalCarbonFootprint = carEmission + busEmission + trainEmission + electricityEmission;
    
    // Display the results
    printf("\nCarbon Footprint Calculation:\n");
    printf("Car Emission: %.2f kg CO2\n", carEmission);
    printf("Bus Emission: %.2f kg CO2\n", busEmission);
    printf("Train Emission: %.2f kg CO2\n", trainEmission);
    printf("Electricity Emission: %.2f kg CO2\n", electricityEmission);
    printf("Total Carbon Footprint: %.2f kg CO2\n", totalCarbonFootprint);
    
    return 0;
}
