#include <stdio.h>

int divisors(int n)
{
    int i, sum = 0;
    for (i = 1; i < n; i++) 
    {
        if (n % i == 0) 
        {
            sum++; 
        }
    }
    return sum;
}

int main()
{
    printf("%d\n", divisors(8)); 
    return 0;
}
