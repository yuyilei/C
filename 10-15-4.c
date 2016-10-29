#include<stdio.h>
int min2(int a,int b){
  return(a<b)?a:b ;
}
 int main(){
   int i,j;
   printf("输入两个整数：  \n");
   scanf("%d %d",&i,&j);
   printf("较小值：%d",min2(i,j));
   return 0;
 }
