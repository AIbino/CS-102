// Planet Weight Converter
// Gabriel Mendez-Frances
// 9-27-2019
// CS 102-02
// This program takes the input of a user in pounds
// and converts it to the weight it would be on a
// specificed planet in the solar system.

#include <stdio.h>
#include <string.h>

int main() {
    double userWeight = 0.0; // Initializing variables
    int planet = 0; 
    char planetName[10] = ""; // Stores the name for the planet used in the output
    double newWeight = 0.0;

    printf("Welcome to Weight Converter. Let's get hefty.\n");
    printf("This program converts the weight of an object on Earth as if it were on a different planet.\n");
    printf("Please enter a weight in pounds (e.g. 150): ");
    scanf("%lf", &userWeight); // Takes in the input from the user and stores it in the userWeight variable
    printf("[1] Mercury\n[2] Venus\n[3] Earth\n[4] Mars\n[5] Jupiter\n[6] Saturn\n[7] Uranus\n[8] Neptune\n");
    printf("Choose a planet by typing in the corresponding number from the list above: \n");
    scanf("%d", &planet); // User input for planet choice
    
    switch (planet) { // Check each possible case for planets and get the newWeight and planetName
        case 1: 
            newWeight = userWeight * 0.4155;
            strcpy(planetName, "Mercury");
            break;
        case 2: 
            newWeight = userWeight * 0.8975;
            strcpy(planetName, "Venus");
            break;
        case 3: 
            newWeight = userWeight * 1.0;
            strcpy(planetName, "Earth");
            break;
        case 4: 
            newWeight = userWeight * 0.3507;
            strcpy(planetName, "Mars");
            break;
        case 5: 
            newWeight = userWeight * 2.5374;
            strcpy(planetName, "Jupiter");
            break;
        case 6: 
            newWeight = userWeight * 1.0677;
            strcpy(planetName, "Saturn");
            break;
        case 7: 
            newWeight = userWeight * 0.8947;
            strcpy(planetName, "Uranus");
            break;
        case 8: 
            newWeight = userWeight * 1.1794;
            strcpy(planetName, "Neptune");
            break;
        default:
            newWeight = -1;
    }
    
    if (newWeight != -1) { // Outputs and checks to see if the user entered an incorrect planet value
        printf("Your orginal weight was %.3lf. On the planet %s, your new weight is %.3lf.\n", userWeight, planetName, newWeight);
    } else {
        printf("ERROR: That is not a valid response!\n");
    }
    return 0;
}
