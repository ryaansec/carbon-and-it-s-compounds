#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define CARBON 6
#define HYDROGEN 1

// Function to display the electron dot structure
void displayElectronDotStructure(int carbonCount, int hydrogenCount) {
    printf("Carbon (C%d)  ", carbonCount);
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
    int hydrogenCount = 0;

    while (carbonCount < 4) {
        if (carbonCount < 4) {
            carbonCount++;
            displayElectronDotStructure(carbonCount, hydrogenCount);
            usleep(1000000);  // Sleep for 1 second to simulate animation
        }

        for (int i = 0; i < 4; i++) {
            if (hydrogenCount < 4 && carbonCount > 0) {
                hydrogenCount++;
                carbonCount--;
                displayElectronDotStructure(carbonCount, hydrogenCount);
                usleep(1000000);  // Sleep for 1 second to simulate animation
            }
        }
    }

    printf("Methane (CH4) formed!\n");

    return 0;
}
