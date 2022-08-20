#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;
    printf("Enter score (0-100):\n");
    scanf("%d", &score);
    switch(score/10)
    {
        case 9 : printf("Grade A");
        break;
        case 8 : printf("Grade B");
        break;
        case 7 : printf("Grade C");
        break;
        case 6 : printf("Grade D");
        break;
        case 5 : printf("Grade E");
        break;
        default : printf("The grade entered is not valid.");
        break;
    }
    return 0;
}
