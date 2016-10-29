#include <stdio.h>
int main()
{
  int no,i,t,q;
  printf("请输入一个整数：");
  scanf("%d",&no);
  t=no%10 ;q=no/10;
  if (t==0)
  {
    for(;q>0;q--)
  printf("1234567890");
  }
  else {
    for (;q>0;q--)
    printf("1234567890");
    for (i=1;i<9&&t>0;i++&&t--)
    printf("%d",i);

  }
  return 0;
}
