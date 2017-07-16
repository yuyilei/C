 /* 从键盘输入文件名，消去该文件的内容,即用只写格式 "w"*/

#include<stdio.h>
 int main ()
{
 FILE *fp ;
 char fname[FILENAME_MAX];
 printf("输入一个文件名\n");
 scanf ("%s",fname);
 fp = fopen ("fname","w");
  fclose (fp);
  return 0;
}


