#include <stdio.h>
 main() {
    int num1 = 12, num2 = 6;

 
    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    int division = num1 / num2;
    int modulo = num1 % num2;

   
    printf("Addition of %d and %d is %d\n", num1, num2, addition);
    printf("Subtraction of %d and %d is %d\n", num1, num2, subtraction);
    printf("Multiplication of %d and %d is %d\n", num1, num2, multiplication);
    printf("Division of %d and %d is %d\n", num1, num2, division);
    printf("Modulo of %d and %d is %d\n", num1, num2, modulo);

  
    printf("\n%d + %d = %d\n", num1, num2, addition);
    printf("%d - %d = %d\n", num1, num2, subtraction);
    printf("%d * %d = %d\n", num1, num2, multiplication);
    printf("%d / %d = %d\n", num1, num2, division);
    printf("%d %% %d = %d\n", num1, num2, modulo);

   
}
