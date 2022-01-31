#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char *path;
    char s;
    short yoz = 1;

    printf("Path ni kiriting: ");
    scanf("%s", &path);
    printf("\n");

    FILE *f = fopen(&path, "r");
    if(f == NULL){
        printf("Path xato yoki fayl mavjud emas.");
        return EXIT_FAILURE;
    }

    FILE *new_file = fopen("D:\\sten4ioeus238ashu8.txt", "w+");

    if(new_file==NULL){
        perror("D:\\sten4ioeus238ashu8.txt");
    }

    while((s = getc(f))!=EOF){
        if(s == ' ') yoz = 0;
        if(s == '\n') yoz = 1;
        if(yoz==1){
            printf("%c", s);
            putc(s, new_file);
        }
    }

    printf("\n\n\n");

    fclose(f);
    fclose(new_file);

    system("pause");
    return 0;
}
