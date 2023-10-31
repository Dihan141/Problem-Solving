#include<stdio.h>

int main()
{
    int i, rows, space;
    scanf("%d",&rows);

    for(i=1; i<=rows; ++i)
    {
        int j = 0;
        for(space=1; space<=rows-i; ++space)
        {
            printf("  ");
        }

        while(j != 2*i-1)
        {
            printf("* ");
            ++j;
        }

        printf("\n");
    }
    return 0;
}