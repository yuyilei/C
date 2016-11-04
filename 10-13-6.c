#include<stdio.h>
int main()
{
  int i,j,no;
  printf("让我们做一个等腰直角三角形（右下）！！\n");
  scanf("%d",&no);
  for (i=1;i<=no;i++)
  {
    for (j=1;j<=no-i;j++)
      printf(" ");
    for (j=1;j<=i;j++)
      printf("*");

   printf("\n");
 }
   return 0;
}
