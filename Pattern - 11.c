#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for (i=0; i<5; i++)
    {
        printf("\n");
        for (j=1; j<=3; j++)
        {
            printf("%d ",(i*j));
        }
    }

    return 0;
}
