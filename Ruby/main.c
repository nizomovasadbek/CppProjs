#include <stdio.h>
#include <stdlib.h>

void get_size(int* a[]){
    int size_in = sizeof(a) / sizeof(int);
    printf("%d\n", size_in);
}

int main()
{
    int a[] = {1,2,3,4,5};
    int size_out = sizeof(a) / sizeof(int);

    printf("%d\n", size_out);
    get_size(&a);

    return 0;
}
