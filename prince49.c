#include <stdio.h>
main() {
    int space = 5;
    for (int i = 0; i < space; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        for (int j = space; j > i; j--) {
            printf("%d ", j);
        }
     printf("\n");
    }
}