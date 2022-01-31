#include <stdio.h>
#include <stdlib.h>

void printAndChange(int a[]){
    int size = sizeof(a) / sizeof(int);
    printf("%d\n", size);
}

int main()
{
    int a[] = {5,5,4,2,2,3,2,4};
    int size = sizeof(a) / sizeof(int);
    printf("%d\n", size);
    printAndChange(a);


    return 0;
}
