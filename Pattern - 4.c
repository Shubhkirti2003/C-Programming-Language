#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0;
    for(i=1;i<=5;i++)
    {
        printf("\n");
        for(j=1;j<i;j++)
        {
            printf("%d",j);
        }

    }
    return 0;
}
