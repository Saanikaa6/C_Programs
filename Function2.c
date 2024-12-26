#include<stdio.h>

// Function Definition where we have written the logic

int Addition(int value1, int value2)
{
    int Result = 0;                     // Local Variable
    Result = value1 + value2;
    return Result ;
}
int main()                              // Entry Point Function
{
    int no1 = 0, no2 = 0, Ans = 0;      // Local Variables

    printf("Enter first number : \n");
    scanf("%d",&no1);

    printf("Enter second number : \n");
    scanf("%d",&no2);

    Ans = Addition(no1,no2);             // Function call 

    printf("Addition is : %d\n",Ans);

    return 0;
}