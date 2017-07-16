/*从文件读入个人信息，按身高排序后进行显示*/
/*要用到结构体的知识，暂时还不会，还要改，如何使其他信息随着身高的改变而改变*/
#include<stdio.h>

int main(){
 FILE  *fp;
 int number = 0;
 char name [100];
 double weight  ;
 int height [100] ;
 int i=0, j;
 char fname [FLIENAME_MAX];

 printf("输入一个文件名\n");
 scanf("%s",fname);
 
 if (( fp = fopen ("fname","w")) == NULL )
   printf("打开文件失败\n");
  else {
    while (fscanf(fp, "%s%d%lf",name,&heigh[i++]t,&weight) == 3 ){
        printf("%-10s %5d  %5.1f \n ", name,height[i++] ,weight );
          number ++ ;
         for ( i=0; i<number-1  ;i++) {
              for ( j= number-1 ; j>i; j--){
                     if 
                
