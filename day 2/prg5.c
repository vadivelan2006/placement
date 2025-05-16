#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        max = a;
    } else {
        max = b;
    }

    printf("Maximum value is: %d\n", max);

    return 0;
}