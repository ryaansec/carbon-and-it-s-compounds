#include <stdio.h>

// Structure to represent the state of the carbon cycle
struct CarbonCycle {
    double atmosphere;
    double oceans;
    double land;
};

// Function to display the current state of the carbon cycle
void displayCarbonCycle(struct CarbonCycle cycle) {
    printf("Atmosphere: %.2f  Oceans: %.2f  Land: %.2f\n", cycle.atmosphere, cycle.oceans, cycle.land);
}

// Function to simulate the carbon cycle based on user inputs
void simulateCarbonCycle(struct CarbonCycle* cycle, double deforestationRate, double carbonEmissions) {
    // Simulate carbon movement
    double landToAtmosphere = deforestationRate * cycle->land;
    double atmosphereToOceans = 0.1 * cycle->atmosphere; // Simplified model
    double oceansToAtmosphere = 0.05 * cycle->oceans;    // Simplified model

    cycle->atmosphere += carbonEmissions - landToAtmosphere - oceansToAtmosphere;
    cycle->oceans += oceansToAtmosphere - atmosphereToOceans;
    cycle->land -= landToAtmosphere;

    // Ensure non-negative values
    cycle->atmosphere = cycle->atmosphere < 0 ? 0 : cycle->atmosphere;
    cycle->oceans = cycle->oceans < 0 ? 0 : cycle->oceans;
    cycle->land = cycle->land < 0 ? 0 : cycle->land;
}

int main() {
    struct CarbonCycle carbonCycle = {800, 1000, 1200}; // Initial values

    printf("Welcome to the Carbon Cycle Simulation!\n");

    while (1) {
        displayCarbonCycle(carbonCycle);

        // Get user inputs
        double deforestationRate, carbonEmissions;
        printf("Enter deforestation rate (0-1): ");
        scanf("%lf", &deforestationRate);

        printf("Enter carbon emissions: ");
        scanf("%lf", &carbonEmissions);

        // Simulate the carbon cycle
        simulateCarbonCycle(&carbonCycle, deforestationRate, carbonEmissions);
    }

    return 0;
}
