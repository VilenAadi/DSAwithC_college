#include <stdio.h>
int main() {
    int arr[10]; 
    int min;
    // Input 10 elements into the array
    printf("Enter the elements of array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    min = arr[0];

    // Compare the elements
    for (int i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The minimum value is: %d\n", min);

    return 0;
}