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
        case 'B': printf("Excellent");
        case 'C': printf("Good");
        case 'D': printf("Better Luck Next Time");
        case 'E': printf("Bad");
        case 'F': printf("Fail");
        default : printf("Invalid Choice");
    }
    return 0;
}
