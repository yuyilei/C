/*从键盘输入打开文件*/

#include<stdio.h>

int main (){

FILE *fp ;
char fname [128];
printf("输入一个文件名 \n");
scanf("%s",fname);

 fp = fopen ("fname","r");
 if (fp ==NULL)
printf("无法打开文件\n");
else {
  printf("成功打开了文件\n");
  fclose (fp);
 }

 return 0;

}
