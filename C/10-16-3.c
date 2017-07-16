#include<stdio.h>
void alert (int n){
  while n-->0;
  printf("\a");
}
 int main(){
   int no ;
   printf("请输入一个数字：\n");
   scanf("%d",&no);
   printf("%d",alert(no));
   return 0;
 }
