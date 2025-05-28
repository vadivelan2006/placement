#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printf("start array: ");
    for (int i=0;i<5;i++) {
        printf("%d",arr[i]); }
  int *start = arr;
    int *end = arr +4;
    while (start < end) {
      int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;}
        
        printf ("\nend array: ");
    for (int i=0;i<5;i++) {
        printf("%d", arr[i]);
    }
   return 0;
}