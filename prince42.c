#include <stdio.h>

main() {
    int space = 5; 
    int i, j;

    for (i = 1; i <= space; i++) {
        for (j = i; j < space; j++) {
            printf("  "); 
        }
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n"); 
    }
}