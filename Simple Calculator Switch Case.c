#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, o;
    printf("Enter operator:\n");
    scanf("%c", &o);
    printf("Enter first number:\n");
    scanf("%d", &num1);
    printf("Enter second number:\n");
    scanf("%d", &num2);
    switch(o)
    {
        case '+' : printf("Adding the numbers:%d", num1+num2);
        break;
        case '-' : printf("Subtracting the numbers:%d", num1-num2);
        break;
        case '/' : printf("Dividing the numbers:%d", num1/num2);
        break;
        case '*' : printf("Multiplying the numbers:%d", num1*num2);
        break;
        default : printf("Invalid Choice");
    }
    return 0;
}
