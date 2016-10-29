#include<stdio.h>
int main()
{
  int a;
  printf("请输入一个整数");
  scanf("%d",&a);
  while(a%2==0&&a>=2)
  {printf("%d",a);
  a=a-2;}
  while(a%2==1&&a>=2)
  {printf("%d",a-1);
  a=a-2;}
  return 0;
