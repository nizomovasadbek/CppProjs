#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *path;
    short read = 1;
    printf("Path: ");
    scanf("%s", &path);
    FILE *f = fopen(&path, "r");

    if(f == NULL){
        printf("Xatolik!");
        system("pause");
        return EXIT_FAILURE;
    }

    FILE *new_file = fopen("D:\\username_of_mail.txt", "w+");
    char s;
    while((s = getc(f))!=EOF){
        if(s == '@'){
            read = 0;
        }
        if(s == '\n'){
            read = 1;
        }
        if(read == 1){
            putc(s, new_file);
        }
    }

    fclose(f);
    fclose(new_file);

    system("pause");
    return 0;
}
