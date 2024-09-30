// Given a temperature in Celsius, convert it to Fahrenheit. Example:Input: 0 Output: 32.


#include <stdio.h>

int main() {
    float celsius;
    float fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}

