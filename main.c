#include <stdio.h>
#include <stdlib.h>

int main()
{
    char o;
    printf("Enter character:\n");
    scanf("%c", &o);

    if(o>=65 && o<=90)
    {
        printf("It is a capital letter.");
    }
    else if(o>=97 && o<=122)
    {
        printf("It is a small case letter");
    }
    else if(o>=48 && o<=57)
    {
        printf("It is a digit.");
    }
    else if(o>=0 && o<=47 || o>=58 && o<=64 || o>=91 && o<=96 || o>=123 && o<=127)
    {
        printf("It is a special character.");
    }
    else
    {
        printf("Invalid.");
    }
    return 0;
}
