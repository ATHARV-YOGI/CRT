#include <stdio.h>
void main()
{

    int a = 10, b = 20, c = 30;

    if (a > b)
    {
        if (a > c)
        {
            printf("a is max");
        }
        else
        {
            printf("c is max");
        }
    }

    if (b > c)
    {
        printf("b is max");
    }
    else
    {
        printf(" c is max");
    }

    getch();
}