#include<stdio.h>
int main()
{
  int no, i,j,a;
  printf("让我们来画一个向下的金字塔！\n金字塔有几层；\n");
  scanf("%d",&no);
  for(i=1;i<=no;i++)
  {
    for (j=1;j<=i;j++)
      printf(" ");
      for(a=1;a<=2*(no-i+1)-1;a++)
      printf("%d",i%10);
   printf("\n");
  } return 0;
}
