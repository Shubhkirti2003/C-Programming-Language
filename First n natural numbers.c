#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x=1;
    printf("Enter limit:",n);
    scanf("%d", &n);
    while(x<=n)
    {
        printf("%d\n",x);
        x++;
    }
    return 0;
}
