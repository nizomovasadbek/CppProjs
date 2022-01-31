#include <stdio.h>
#include <stdlib.h>

int * getRandom(void) {

   static int  r[10] = {1,2,3,4,5,6,7,8,9,10};
   int i;

   srand(time(NULL));

   for(int i = 0; i < 10; i++){
        r[i] = rand();
   }

   return r;
}

int main () {

   int *p;

   p = getRandom();

   for(int i = 0; i < 10; i++){
        printf("r[%d]=%d\n", i, *(p+i));
   }

   return 0;
}
