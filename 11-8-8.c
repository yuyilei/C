 #include<stdio.h>

/*打开二进制文件进行复制*/

int main(){
    unsigned char buf[16];
    int ch ;
    FILE *sfp ;
    FILE *dfp ;
    char sname [FILENAME_MAX];
    char dname [FILENAME_MAX];

    printf("打开原文件：\n");
    scanf("%s",sname);
    printf("打开目标文件\n");
    scanf("%s",dname);

    if (( sfp = fopen (sname ,"r")) ==NULL)
        printf("打开原文件失败\n");
     else {
         if( (dfp = fopen (dname ,"w")) ==NULL) 
             printf("打开目标文件失败\n");
         else{
          
             while((ch = fread (buf, 1,16 ,sfp) )>0)
                 fwrite (buf ,1 , 16 ,dfp );
         }
        fclose (dfp);
     }
     fclose(sfp);
     return 0 ;
}
/*未完待续*/
