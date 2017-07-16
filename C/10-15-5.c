#include<stdio.h>
int max3(int a,int b,int c){
  int max=a;
  if (a<b) max=b;
  if (a<c) max=c;
  return max;
}
 int main(){
   int i,j,k;
   printf("请输入三个整数：\n");
   scanf("%d%d%d",&i,&j,&k);
   printf("最大值：%d",max3(i,j,k));
   return 0;
 }
