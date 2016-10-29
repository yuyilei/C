#include<stdio.h>
int main()
{
  int a;
  printf("请输入一个整数：");
  scanf("%d",&a);
  while(a>=0)
  printf("%d\n",a--);
  return 0;
}
