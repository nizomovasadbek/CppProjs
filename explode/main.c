#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *path;
    printf("Path: ");
    scanf("%s", &path);

    FILE *f = fopen(&path, "r");
    char s;
    FILE *username = fopen("D:\\obshee.txt", "w+");

    while((s = getc(f))!=EOF){
        if(s == ':'){
        printf("putting down\n");
        putc('\n', username);
        continue;
        }
        printf("putting character: %c\n", s);
        putc(s, username);
    }

    fclose(f);
    fclose(username);
    return 0;
}
