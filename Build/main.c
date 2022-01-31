#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* path;
    char s;
    short yoz = 1;

    printf("Path ni kiriting: ");
    scanf("%s", &path);
    printf("\n");

    FILE *f = fopen(&path, "r");
    FILE *new_file_handler = fopen("D:\\najdnjksow239sk.txt", "w+");
    while((s = getc(f))!=EOF){
        if(s == '@'){ yoz = 0; }
        if(s == ':') yoz = 1;
        if(yoz==1){
        putc(s, new_file_handler);
        printf("%c", s);
        }
    }

    fclose(new_file_handler);
    fclose(f);
    return 0;
}
