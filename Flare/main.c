#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *path;
    short state = 0;
    printf("Path ni kiriting: ");
    scanf("%s", &path);

    FILE *f = fopen(&path, "r");
    if(f == NULL){
        perror("Xatolik: ");
    }

    FILE *username_file = fopen("D:\\username_fayl.txt", "w+");
    FILE *mail_file = fopen("D:\\mail_fayl.txt", "w+");
    FILE *hash_file = fopen("D:\\hash_mail.txt", "w+");

    char s;
    char enter = '\n';

    while((s = getc(f))!=EOF){
        if(state == 0){
            if(s==':'){ putc(enter, username_file); state = 1;  continue; }
            putc(s, username_file);
            printf("puts into USERNAME file in D:username_file.txt %c\n", s);
        }
        if(state == 1){
            if(s == ':'){ putc(enter, mail_file); state = 2; continue; }
            putc(s, mail_file);
            printf("puts into MAIL file in D:mail_file.txt %c\n", s);
        }
        if(state == 2){
            if(s == enter){ putc(enter, hash_file); state = 0; continue; }
            putc(s, hash_file);
            printf("puts into HASH file in D:hash_mail.txt %c\n", s);
        }
    }

    fclose(f);
    fclose(username_file);
    fclose(mail_file);
    fclose(hash_file);

    FILE *fp = fopen(&path, "r");
    FILE *new_file = fopen("D:\\new-file.txt", "w+");
    FILE *faqat_mail = fopen("D:\\faqat_mail.txt", "w+");
    short read = 1;

    char k;
    while((k = getc(fp))!=EOF){
            if(read == 0){
            if(k == ':'){
                read = 1;
            }
        }
        if(k == '@'){
            read = 0;
        }
        if(read == 1){
            putc(k, new_file);
    printf("puts %c D:new-file.txt\n", k);
        }
    }

    fclose(fp);
    fclose(new_file);

    FILE *f3 = fopen(&path, "r");
    char ca;
    short u = 0;
    while((ca = getc(f3))!=EOF){
            if(ca == '@') u = 0;
        if(ca == ':'){
            u = 1;
            continue;
        }
        if(u == 1){
                putc(ca, faqat_mail); }
    }

    fclose(f3);
    fclose(faqat_mail);

    getch();
    return 0;
}
