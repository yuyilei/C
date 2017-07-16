/*打开文件复制到另一文件，并显示原文件*/
#include<stdio.h>

int main(){
  
    int ch ;
    FILE *sfp ;
    FILE *dfp ;
    char sname [FILENAME_MAX];
    char dname [FILENAME_MAX];

    printf(" 打开原文件\n");
    scanf("%s",sname);
    printf("打开目标文件\n");
    scanf("%s",dname);

    if ((sfp = fopen (sname ,"r")) == NULL)
        printf("打开原文件失败\n");
    else {
        if (( dfp = fopen (dname ,"w")) == NULL)
             printf("打开目标文件失败\n");
           else {
              while ((ch = fgetc (sfp)) != EOF){
                 fputc (ch ,dfp);
                putchar(ch);

           }
           fclose (dfp);

    }
    fclose (sfp);

}
return 0;
}
