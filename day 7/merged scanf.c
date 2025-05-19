#include <stdio.h>

int main() {
    int size1, size2;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr1[size1], arr2[size2], merged[size1 + size2];
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }
    printf("Merged array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}