#include<stdio.h>

int main()
{
    int A = 10;
    const int B = 10;

   A++;

   B++;   // here we cannot change the value of B which is a constant

    return 0;
}