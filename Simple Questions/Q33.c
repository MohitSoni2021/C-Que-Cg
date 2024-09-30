// Write a program that takes a year as input and checks whether it is a century year (a year divisible by 100).

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 100 == 0) {
        printf("%d is a century year");
    } else {
        printf("%d is not a century year.\n", year);
    }

    return 0;
}