#include <stdio.h>

int main() {
    int space = 5;     
    for (int i = 1; i <= space; i++) {
        for (int j = i; j < space; j++) {
            printf("  ");
        }
        
        for (int k = 1; k <= i; k++) {
            printf("%d", space - i + 1);
            if (k < i) {
                printf(" ");
            }
        }
        
        printf("\n");
    }
    
}