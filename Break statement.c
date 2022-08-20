#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int num, sum=0;
    for(i=1; i<=10; i++)
    {
        printf("Enter a number %d:",i);
        scanf("%d", &num);
        if(num<0)
        {
            break;
        }
        sum=sum+num;
    }
    printf("Sum is %d",sum);
    return 0;
}
