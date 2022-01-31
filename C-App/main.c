#include <stdio.h>
#include <stdlib.h>

void delete_element(int a[], int index, int LENGTH){
    int vcount = 0;
    int new_arr[LENGTH];
    if(LENGTH!=0){
        for(int i = 0; i < index; i++){
            new_arr[i] = a[i];
            vcount++;
        }
        for(int j = index+1; j < LENGTH; j++){
            new_arr[vcount++] = a[j];
        }
    }
    for(int i = 0; i < vcount; i++){
            if(i!=vcount-1)
        printf("%d, ", new_arr[i]);
    else printf("%d", new_arr[i]);
    }
    printf("\n");
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8};
    int len = sizeof(a) / sizeof(int);
    delete_element(a, 3, len);

    getch();
    return 0;
}
