#include <stdio.h>
int main(){
    int a=15;
    int*p=&a;
    printf("%d\n",&a);
    printf("%d\n",*p);
    printf("%d\n",&p);
    return 0;
}