#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("C:\\Windows\\Mtilini.ini", "r");
    if(f==NULL){
        perror("Xatolik");
        return EXIT_FAILURE;
    }
    char s;
    short read = 0;
    while((s = getc(f))!=EOF){
        if(s == '='){ printf("\n");
            read = 1;  continue; }
            if(s == '\n'){ read = 0;  }
        if(read == 1)
            printf("%c", s);
    }
    printf("\n");

    printf("\n1 chisi login\n2 chisi parol\n");
    system("color a");

    return 0;
}
