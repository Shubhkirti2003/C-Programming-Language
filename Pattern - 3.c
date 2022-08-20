#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0;
    for(i=5;i>=0;i--)
    {
        printf("\n");
        for(j=0;j<i;j++)
        {
            printf("*");
        }

    }
    return 0;
}
