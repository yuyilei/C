#include<stdio.h>
int main()
{
  int a,i,no,j;
  printf("让我们来画一个金字塔吧！！！\n");
  printf("金字塔有几层：  \n");
  scanf("%d",&no);
  for (i=1;i<=no;i++)
  {
    for (j=1;j<=no-1;j++)
    printf(" ");
    for(a=1;a<=2*i-1;a++)
    printf("*");
    printf("\n");
  }
  return 0;
}
