#include<stdio.h>
int main()
{int a,b,c;
  printf("请输入两个整数\n");
  puts("整数a:");
  scanf("%d",&a);
  puts("整数b");
  scanf("%d",&b);
  c=(a<b)?(b-a):(a-b);
  if (c<=10)
  puts("他们的差小于等于10");
  else
  puts("它们的差大于11");
  return 0;

}
