#include<stdio.h>
int main ()
{
  int a,b,c;
  printf("请输入三个整数：\n");
  printf("整数1：");
  scanf("%d",&a);
  printf("整数2：");
  scanf("%d",&b);
  printf("整数3：");
  scanf("%d",&c);
  if (a==b && b==c)
  puts("三个数相等");
  else if (a==b&&a!=c)
 puts("有两个数相等");
 else if( a==c&&a!=b)
  puts("有两个数相等");
  else if(c==b&&a!=b)
  puts("有两个数相等");
  else
  puts("三个数各不相等");
  return 0;
}
