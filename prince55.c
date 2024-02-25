#include <stdio.h>

int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int array[size];
 
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }
   
    int sum = calculateSum(array, size);

    printf("Sum of array elements: %d\n", sum);

    return 0;
}