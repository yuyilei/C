#include<stdio.h>
int main()
{
  int a,b;
  printf("请输入两个整数："\n);
  printf("整数a:");
  scanf("%d",&a);
  printf("整数b：");
  scanf("%d",&b);
  (a==b)?printf("两个数相等"):printf("两个数不相等");
  return 0;
}
