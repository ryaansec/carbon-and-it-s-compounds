#include <stdio.h>

void displayElectronDotStructure(int carbonCount) {
    printf("Electron Dot Structure:\n");

    // Display carbon atoms
    for (int i = 0; i < carbonCount; i++) {
        printf("   C   ");
    }
    printf("\n");

    // Display bonds and valence electrons
    for (int i = 0; i < carbonCount; i++) {
        printf("  : :  ");  // Two dots for each valence electron
    }
    printf("\n");

    // Display hydrogen atoms and valence electrons
    for (int i = 0; i < carbonCount; i++) {
        printf(" H H H ");
    }
    printf("\n\n");
}

int main() {
    int carbonCount;

    // Get user input for the number of carbon atoms
    printf("Enter the number of carbon atoms: ");
    scanf("%d", &carbonCount);

    // Display electron dot structure
    displayElectronDotStructure(carbonCount);

    return 0;
}
