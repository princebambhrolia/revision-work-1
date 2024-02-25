#include <stdio.h>

int isLeapYear(int year) {
   
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void printLeapYearsBetween(int startYear, int endYear) {
    while (startYear <= endYear) {
        if (isLeapYear(startYear)) {
            printf("%d is a leap year.\n", startYear);
        }
        startYear++;
    }
}

int main() {
    int firstYear, secondYear;

   
    printf("Enter the first number (year): ");
    scanf("%d", &firstYear);

    printf("Enter the second number (year): ");
    scanf("%d", &secondYear);    
    printf("Leap years between %d and %d:\n", firstYear, secondYear);
    printLeapYearsBetween(firstYear, secondYear);

    return 0;
}