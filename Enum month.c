#include <stdio.h>
#include <stdlib.h>

enum months{january=1, february, march, april, may, june, july, august, september, october, november, december};
int main()
{
    for(int i=january; i<=december;i++)
    {
        printf("%d ",i);
    }
    return 0;
}

