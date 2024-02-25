#include <stdio.h>

void printNumbersUpToN(int N) {
    int i = 1;
    while (i <= N) {
        printf("%d ", i);
        i++;
    }
}

int main() {
    int N;
  
    printf("Enter any number: ");
    scanf("%d", &N);   
    printNumbersUpToN(N);

    return 0;
}