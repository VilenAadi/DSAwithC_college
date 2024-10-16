#include <stdio.h>
int main() {
    int arr[10]; 
    int max;
    // Input 10 elements into the array
    printf("Enter the elements of array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];

    // Compare the elements
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The maximum value is: %d\n", max);

    return 0;
}