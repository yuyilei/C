#include<stdio.h>
int main(){
  int a,b;
  printf("请输入a和b的值：\n");
  scanf("%d%d",&a,&b);
  printf("%d %d %d %d",a+b,a-b,a*b,a/b);
  return 0;
}
