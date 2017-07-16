#include<stdio.h>
int main()
{
  int i=1,a;
  printf("请输入一个整数：");
  scanf("%d",&a);
  while(i*2<a)
{  i=i*2;
  printf("%d\n",i);
  }
    return 0;
}
