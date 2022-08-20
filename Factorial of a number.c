#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,f=1;
    printf("Enter a number:");
    scanf("%d",&x);
    for(y=1;y<=x;y++)
    {
        f=f*y;
    }
    printf("Factorial=%d",f);
    return 0;
}
