#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    for(x=1; x<6; x++)
    {
        if(x==4)
        {
            continue;
        }
        else
        {
            printf("Hello, this is %d iteration.\n",x);
        }
    }
    return 0;
}
