#include <stdio.h>

int main() {
    // TEMPATURE COVERSION PROGRAM

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenherit to Celsius\n");
    printf("Is the temperature in Celsius or Fehrenhet? (C/F): ");
    scanf (" %c", &choice);

    if(choice == 'C'){
    // Celsius to Fahrenheit conversion 
        printf("Enter the temperature in Celsius: ");
        scanf ("%f", &celsius);
        fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
        printf("The temperature in Fahrenheit is: %.3f\n", fahrenheit);      
    } else if(choice == 'F'){
        // Fahrenheit to Celsius conversion
        printf("Enter the temperature in Fahrenheit: ");
        scanf ("%f", &fahrenheit);
        celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;
        printf("The temperature in Celsius is: %.3f\n", celsius);
    }   
    return 0;
}