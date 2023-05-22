#include "mylib.h"


void swap(int * a, int * b )
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int mult(int a, int b)
{
    return a*b;
}

int div(int a, int b)
{
    if(b != 0)
        return a/b;
    return -1;
}
