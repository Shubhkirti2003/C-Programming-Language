#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("Enter grade:\n");
    scanf("%c", &grade);
    switch(grade)
    {
        case 'A': printf("Outstanding");
        break;
        case 'B': printf("Excellent");
        break;
        case 'C': printf("Good");
        break;
        case 'D': printf("Better Luck Next Time");
        break;
        case 'E': printf("Bad");
        break;
        case 'F': printf("Fail");
        break;
        default : printf("Invalid Choice");
    }
    return 0;
}
