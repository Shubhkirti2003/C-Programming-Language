#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks1;
    printf("Enter marks:\n");
    scanf("%d", &marks1);
    if(marks1>90 && marks1<=100)
    {
        printf("A+ Grade:%d",marks1);
    }
    else if(marks1>80 && marks1<=90)
    {
        printf("A Grade:%d",marks1);
    }
    else if(marks1>70 && marks1<=80)
    {
        printf("B Grade:%d",marks1);
    }
    else if(marks1>60 && marks1<=70)
    {
        printf("C Grade:%d",marks1);
    }
    else if(marks1>50 && marks1<=60)
    {
        printf("D Grade:%d",marks1);
    }
    else if(marks1>40 && marks1<=50)
    {
        printf("E Grade:%d",marks1);
    }
    else if(marks1>0 && marks1<=40)
    {
        printf("F Grade:%d",marks1);
    }
    else
    {
        printf("Invalid Marks");
    }
    return 0;
}
