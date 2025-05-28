#include <stdio.h>
int main(){
    char a[]="balaji";
    int length=0;
    while (a[length]!=0){
        length++;
    }
    printf("Length of the string is: %d\n",length);
    return 0;
}