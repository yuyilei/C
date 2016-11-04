#include<stdio.h>
int sump (int n){
  int i,sum;
  for(i=1;i<=n;i++){
    sum+=i;
  }
  return sum;
}
 int main(){
   int no;
   printf("请输入一个整数：\n");
   scanf("%d",&no);
   printf("%d",sump(no));
   return 0;
 }
