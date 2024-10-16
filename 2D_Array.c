#include <stdio.h>

int main() {
    int m, n;

    // Input number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int arr[m][n];

    // Input elements into the 2D array
    printf("Enter elements for a %dx%d array:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the elements of the 2D array
    printf("The elements of the array are:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");  // to change line
    }

    return 0;
}