#include<stdio.h>
int main()
{
  int i,j,no;
  printf("生成一个正方体\n正方体有几层：\n");
  scanf("%d",&no);
  for(i=1;i<=no;i++)
  {
    for(j=1;j<=no;j++)
    printf("*");
    putchar('\n');
  }
  return 0;
}
