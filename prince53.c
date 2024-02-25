#include <stdio.h>

int Cube(int num);

int main() {
    int number, cube;
   
    printf("Enter any number: ");
    scanf("%d", &number);
   
    cube =Cube(number);
   
    printf("cube is %d is: %d\n", number, cube);
    
}

int Cube(int num) {
    return num * num * num;
}