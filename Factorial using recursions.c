#include <stdio.h>
#include <stdlib.h>

int fact(int);
int main()
{
    int n,f;
    printf("Enter the number whose factorial you want to calculate:");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial=%d", f);
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return 1;
    }
    else
        {
            return n*fact(n-1);
        }
}

