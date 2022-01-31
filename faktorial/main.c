#include <stdio.h>
#include <stdlib.h>

int main()
{
    long double a = 3;
    int *b = &a;
    printf("%f", b);
    return 0;
}
