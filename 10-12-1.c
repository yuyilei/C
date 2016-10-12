#include<stdio.h>
int main()
{
  int no,i,sum=0;
  printf("请输入一个整数：");
  scanf("%d",&no);
  for (i=1;i<=no;i++)
  sum=sum+i;
  printf("1到%d的和为%d",no,sum);
  return 0;
}
