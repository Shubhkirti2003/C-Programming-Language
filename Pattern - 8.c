#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,k=0;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=(5-i);k++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
    printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(k=1;k<=(5-i);k++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
