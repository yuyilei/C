#include<stdio.h>
#include<ctype.h>
/*复制文件同时将大写字母改为大写字母*/

int main(){
  
    int ch ;
    FILE *sfp ;
    FILE *dfp ;
    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];

    printf("打开原文件\n");
    scanf("%s",sname);
    printf("打开目标文件\n");
    scanf("%s",dname);

    if (( sfp = fopen(sname ,"r")) == NULL)
        printf("打开原文件失败\n");
    else 
     { 
         if ((dfp = fopen (dname ,"w")) == NULL)
             printf("打开目标文件失败\n");
           else 
           { 
               while ((ch = fgetc (sfp)) != EOF)
               { 
                   ch = toupper (ch);
                   fputc ( ch ,dfp );
                   putchar (ch) ;

               }
               fclose (dfp);
           }   
           fclose (sfp);
     }

    return 0;
}

