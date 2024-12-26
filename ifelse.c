#include<stdio.h>

int main()
{
    int No = 0, Result = 0;

    printf("Enter a number : \n");
    scanf("%d",&No);

    Result = No % 2;

    if (Result == 0)
    {
        printf("It is an even number\n");
    }
    else
    {
        printf("It is a odd number\n");
    }

    return 0;
}