#include<stdio.h>

int factorial (int n){
 int i;
 int q=1;
  for(i=1;i<=n;i++){
    q=q*i;
  }
  return q;
}

int main(){
  int n;
  printf("请输入一个整数n:\n");
  scanf("%d",&n);
  printf("n的阶乘是：%d",factorial(n));
  return 0;
}
