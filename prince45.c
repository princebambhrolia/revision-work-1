#include <stdio.h>

main() {
    int space = 1; 
    int i, j;

    for (i = 5; i >= space; i--) {
        for (j = i; j >space; j--) {
            printf("  "); 
        }
        for (j = i; j <= 5; j++) {
            printf("%d ", j);
        }
        printf("\n"); 
    }
}