#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,A;
    printf("Enter numerator- ");
    scanf("%d",&x);
    printf("Enter denominator- ");
    scanf("%d",&y);
    if(y==0)
    {
        goto there;
    }
    else
    {
        A=x/y;
        printf("Result=%d\n",A);
    }
    goto end;
        there:printf("The denominator is zero. Please enter appropriate value.\n");
end:printf("End of the program.");
    return 0;
}
