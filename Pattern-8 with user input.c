#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,r;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(k=1;k<=(r-i);k++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
printf("\n");
    }
    for(i=(r-1);i>=1;i--)
    {
        for(k=1;k<=(r-i);k++)
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
