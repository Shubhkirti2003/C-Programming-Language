#include <stdio.h>
#include <stdlib.h>

void main()
{
    void average (int, int, int, int, int);
    int a, b, c, d, e;
    printf ("Enter five numbers.\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    average (a, b, c, d, e);
}

void average (int a, int b, int c, int d, int e)
{
    float avg;
    avg = (a+b+c+d+e)/5;
    printf("average of five numbers is = %f", avg);

}
