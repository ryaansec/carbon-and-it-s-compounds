#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Function to display the electron dot structure
//LIKE A GAME (YOU HAVE TO INCLUDE MORE PLAYERS {MOLECULES})
void displayElectronDotStructure(int carbonCount, int hydrogenCount, int nitrogenCount, int chlorineCount) {
    printf("Carbon (C%d)  ", carbonCount);
    for (int i = 0; i < carbonCount * 4; i++) {
        printf(".");
    }
    printf("\n");

    printf("Hydrogen (H%d) ", hydrogenCount);
    for (int i = 0; i < hydrogenCount; i++) {
        printf(".");
    }
    printf("\n");

    printf("Nitrogen (N%d) ", nitrogenCount);
    for (int i = 0; i < nitrogenCount * 3; i++) {
        printf(".");
    }
    printf("\n");

    printf("Chlorine (Cl%d) ", chlorineCount);
    for (int i = 0; i < chlorineCount * 7; i++) {
        printf(".");
    }
    printf("\n");

    printf("\n");
}

int main() {
    int carbonCount = 0;
    int hydrogenCount = 0;
    int nitrogenCount = 0;
    int chlorineCount = 0;
    int choice;

    printf("Welcome to the tetravalency formation animation!\n");

    while (carbonCount < 4) {
        printf("Select an atom to add (1 for Hydrogen, 2 for Nitrogen, 3 for Chlorine): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                hydrogenCount++;
                break;
            case 2:
                nitrogenCount++;
                break;
            case 3:
                chlorineCount++;
                break;
            default:
                printf("Invalid choice. Try again.\n");
                continue;
        }

        if (carbonCount + hydrogenCount + nitrogenCount + chlorineCount > 4) {
            printf("Tetravalency with carbon achieved!\n");
            break;
        }

        displayElectronDotStructure(carbonCount, hydrogenCount, nitrogenCount, chlorineCount);
        usleep(1000000);  // Sleep for 1 second to simulate animation
    }

    return 0;
}


/*#include <stdio.h>

int main() {
    int carbonCount = 0;
    int hydrogenCount = 0;
    int nitrogenCount = 0;
    int chlorineCount = 0;

    printf("Welcome to the tetravalency formation simulation!\n");

    while (carbonCount < 4) {
        printf("Select an atom to add (1 for Hydrogen, 2 for Nitrogen, 3 for Chlorine, 0 to finish): ");
        int choice;
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        }

        switch (choice) {
            case 1:
                hydrogenCount++;
                break;
            case 2:
                nitrogenCount++;
                break;
            case 3:
                chlorineCount++;
                break;
            default:
                printf("Invalid choice. Try again.\n");
                continue;
        }

        if (carbonCount + hydrogenCount + nitrogenCount + chlorineCount > 4) {
            printf("Tetravalency with carbon achieved!\n");
            break;
        }
    }

    return 0;
}
*/