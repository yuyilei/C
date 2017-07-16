/*将圆周率写进二进制文件再进行读取*/
#include<stdio.h>

{
    FILE *fp ;
    double pi = 3.14159265358979323846;

    printf( "从变量pi得到的圆周率是23.2lf。\n",pi);

    if ((fp = fopen ("pi.bin","wb")) ==NULL)
        printf("文件打开失败\n");
       else
       {
           fwrite ( &pi ,sizeof(double) , 1 ,fp);
           fclose (fp);

       }

       if ((fp = fopen("pi.bin","rb")) == NULL)
           printf("打开文件失败\n");
       else
       {
           fread(&pi , sizeof(double) , 1 ,fp);
           printf("从文件读取的圆周率是%23.1lf。\n",pi);
           fclose(fp);
       }

       

      return 0 ;
}
