#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;
    ptr = (int *) malloc(5 * sizeof(int));

    ptr = (int *) realloc(ptr, 7 * sizeof(int));    //memory vadhli

    ptr = (int *) realloc(ptr, 3 * sizeof(int));    //mmemory kami zali

    return 0;
}