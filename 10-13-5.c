#include<stdio.h>
int main()
{
  int i,j,no;
  printf("让我们来做一个等腰直角三角形（左上）吧！\n");
  printf("边长：\n");
  scanf("%d",&no);
  for(i=1;i<=no;i++)
  {
    for(j=1;j<=no-i+1;j++)
    {
      printf("*");
    } printf("\n");
  } return 0;
}
