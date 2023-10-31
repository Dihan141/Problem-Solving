#include<stdio.h>

int main()
{
    int i=2;
    int sum = 0;
    while(i<100)
    {
        sum += i;
        i += 3;
    }
    printf("The sum is: %d", sum);
    return 0;
}