#include<stdio.h>
void adjust_point(int *n){
  if (*n<0)
  *n=0;
  else if (*n>100)
  *n=100;
  else
  *n=*n;
}
int main(){
  int n;
  printf("请输入一个整数\n");
  scanf("%d",&n);
  adjust_point(&n);
  printf("调整之后的值是%d",n);
  return 0;
}
