#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Function to calculate the required number of hydrogens based on the number of carbons
int calculateHydrogenCount(int carbonCount) {
    return 2 * carbonCount + 2;
}

// Function to display the electron dot structure
void displayElectronDotStructure(int carbonCount, int hydrogenCount) {
    printf("Alkane (C%dH%d)  ", carbonCount, hydrogenCount);
    for (int i = 0; i < carbonCount * 4; i++) {
        printf(".");
    }
    printf("\n");

    for (int i = 0; i < hydrogenCount; i++) {
        printf("Hydrogen (H) ");
        for (int j = 0; j < 2; j++) {
            printf(".");
        }
        printf("\n");
    }

    printf("\n");
}

int main() {
    int carbonCount = 0;
    int hydrogenCount = calculateHydrogenCount(carbonCount); // Initial hydrogen count

    while (carbonCount < 4) {
        printf("Select an atom to add (1 for Carbon, 2 for Hydrogen): ");
        int choice;
        scanf("%d", &choice);

        if (choice == 1) {
            carbonCount++;
            hydrogenCount = calculateHydrogenCount(carbonCount); // Update hydrogen count
            displayElectronDotStructure(carbonCount, hydrogenCount);
            usleep(1000000);  // Sleep for 1 second to simulate animation
        } else if (choice == 2 && carbonCount > 0) {
            hydrogenCount--;
            carbonCount--;
            displayElectronDotStructure(carbonCount, hydrogenCount);
            usleep(1000000);  // Sleep for 1 second to simulate animation
        } else if (choice == 2 && carbonCount == 0) {
            printf("Carbon atoms are required for alkane formation.\n");
        } else {
            printf("Invalid choice.\n");
        }
    }

    printf("Alkane formed!\n");

    return 0;
}
