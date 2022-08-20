#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1, n=10;
    while(x<=n)
    {
        if(x==7)
        {
            break;
        }
        else
        {
             printf("%d\n",x);
             x++;
        }
    }
    return 0;
}
