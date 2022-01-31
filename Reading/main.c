#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char* path;
    char s;
    char c[100];
    int n = 0;
    short yoz;

    yoz = 0;
    printf("Path ni kiriting: ");
    scanf("%s", &path);

    FILE *f = fopen(&path, "r");

    if(f == NULL){
        perror(&path);
        return EXIT_FAILURE;
    }

    FILE *new_file = fopen("D:\\base2.txt", "w+");
    if(new_file==NULL)
        perror("D:\\base2.txt");

    while((s = getc(f))!=EOF){
        if(s==':'){ yoz = 1; continue; }
        if(yoz == 1){ printf("%c", s); putc(s, new_file); }
    if(s == '\n') yoz = 0;
    }

    printf("\n\n\n");

    fclose(f);
    fclose(new_file);

    system("pause");
    system("pause");
    return EXIT_SUCCESS;
}
