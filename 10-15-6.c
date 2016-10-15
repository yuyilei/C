#include<stdio.h>
int cube(int x){
  return x*x*x;
}
 int main(){
   int no;
   printf("请输入一个整数：\n");
   scanf("%d",&no);
   printf("%d的立方是%d",no,cube(no));
   return 0;
