#include <stdio.h>

int main() {
    int num, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    printf("%d is %sa palindrome.\n", num, (num == rev) ? "" : "not ");
    printf("Reversed number: %d\n", rev);
    return 0;
}

