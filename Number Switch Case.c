#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
    printf("Enter number:\n");
    scanf("%d", &num);
    switch(num)
    {
        case 100 : printf("Number is equal to 100.");
        break;
        case 150 : printf("Number is equal to 150.");
        break;
        case 200 : printf("Number is equal to 200.");
        break;
        default : printf("Invalid Choice");
    }
    return 0;
}
