#include <stdio.h>
void printOddNumbersReverse(int N) {
    while (N >= 1) {
        if (N % 2 != 0) {
            printf("%d ", N);
        }
        N--;
    }
}

int main() {
    int N;
   
    printf("Enter any number: ");
    scanf("%d", &N);    
    printOddNumbersReverse(N);

    return 0;
}