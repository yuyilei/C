/*用字符和字符编码显示文件内容*/
#include<stdio.h>
#include<ctype.h>

int main(){
    int n ;
    unsigned long count = 0 ;
    unsigned char buf[16] ;
    FILE *fp ;
    char fname [FILENAME_MAX];

     printf("文件名\n");
     scanf("%s",fname);

     if ((fp = fopen( fname ,"rb")) ==NULL)
         printf("打开文件失败\n");

     else {
         while (( n =fread( buf ,1 ,16 ,fp )) >0) 
           /*返回值是成功读取的元素的个数*/
         {  
             int i ;
             printf("%08lx" , count);

             for (i=0; i<n ;i++)
                 printf("%02x",(unsigned)buf[i]);

             if (n<16)
                for (i =n ; i<n ;i++)
                   printf("    ");

            for (i=0;i<n;i++)
               putchar(isprint(buf[i]) ? buf[i] : '.');

           putchar ('\n'); 
               
           count += 16 ;

         }
         fclose(fp);

     }
  
     return 0;
}
