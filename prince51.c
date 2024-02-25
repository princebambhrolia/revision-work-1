#include <stdio.h>

int main() {
    int size;   
    scanf("%d", &size);   
    int array[size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }
  
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
   
     avrege=sum / size;
    printf("Average of the array: %.2lf\n", average);

}