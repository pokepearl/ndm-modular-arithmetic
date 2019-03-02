#include <stdlib.h>
#include <stdio.h>
#include <libndls.h>
void welcomeBar() {
    puts("Welcome to NDM-Modular Arithmetic v1.0");
    puts("github.com/REDACTED");
    puts("Developed by Me (GPLv3)");
    puts("");
}
// Simply returns the remaining value after performing modulus on the given numbers.
int calcMod(int number, int mod) {
    return number % mod;
}
// Handles user input and converting str to int.
void calculate() {
    puts("Enter the number you wish to operate on:");
    char numstr[128]; // Create 128-character string to store number
    scanf("%s", &numstr); // Write input to string
    int numint = atoi(numstr); // Convert string to integer value (drops non-numeric values during conversion)
    puts("Enter the modulus value to use:");
    char modstr[128];
    scanf("%s", &modstr);
    int modint = atoi(modstr);
    puts("");
    puts("The following values have been entered: ");
    printf("Number  = %i\n", numint);
    printf("Modulus = %i\n", modint);
    puts("");
    printf("Result = %i\n", calcMod(numint, modint)); // Calls the function calcMod function to perform the calculation and prints result.
}
// Main Function
int main() {
    welcomeBar(); //Display Banner with Program Name/Version and developer info.
    calculate();
    puts("Press 'esc' to exit or 'space' to enter another set.");
    bool end = false;
    while (!end) { // Loops until the boolean is true
        if (isKeyPressed(KEY_NSPIRE_ESC)) { // If Delete key is pressed, exit loop and exit.
            *&end = true;
        }
        if (isKeyPressed(KEY_NSPIRE_SPACE)) { // If space is pressed, go down 100 lines and rerun main loop
            for (int i = 0; i< 100; i++) {
                puts("");
            }
            main();
        }
    }
    return 0;
}