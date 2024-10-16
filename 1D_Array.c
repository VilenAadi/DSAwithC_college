#include <stdio.h>

int main() {
    int arr[5];  

    // Input elements into the array
    printf("Enter 5 Elements of Array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the elements of the array
    printf("The elements of the array are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}