#include<stdio.h>
int main()
{
  int i=2,a;
  printf("请输入一个整数：");
  scanf("%d",&a);
  while(i<=a)
  printf("%d",i);
  i=i+2;
  return 0;
}
