#include<stdio.h>
int main()
{
  int a,b,c;
  printf("请输入两个整数\n");
  printf("整数a:");
  scanf("%d",&a);
  printf("整数b:");
  scanf("%d",&b);
  c=(a*100)/b;
  printf("a的值是b的%d%%\n",c);
  return 0;
}
