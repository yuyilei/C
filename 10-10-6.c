#include<stdio.h>
int main()
{
  int a,b=1,t=1;
  printf("请输入一个整数：");
  scanf("%d",&a);
  while(a>=1,b<=a ){
    b=t*t;
    t=t+1;
    printf("%d",b);

  }
  return 0;
}
