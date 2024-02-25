#include <stdio.h>
main() {
    int space = 5;

    for (int i = 0; i < space; i++) {

        for (int j = 0; j <space - i - 1; j++) {
            printf("  ");
        }
        for (int j = 1; j <= i + 1; j++) {
            printf("%2d", j);
        }
        for (int j = i; j >= 1; j--) {
            printf("%2d", j);
        }
         printf("\n");
    }
}