#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=3,b=5;
    printf("\nBefore using pre/post increment operator");
    printf("\na=%d",a);
    printf("\nb=%d",b);
    b=++a;
    printf("\nAfter using pre increment operator");
    printf("\na=%d",a);
    printf("\nb=%d",b);
    printf("\n");
    int c=3,d=5;
    printf("\nBefore using pre/post increment operator");
    printf("\nc=%d",c);
    printf("\nd=%d",d);
    d=c++;
    printf("\nAfter using post increment operator");
    printf("\nc=%d",c);
    printf("\nd=%d",d);
    return 0;
}
