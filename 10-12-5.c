#include<stdio.h>
int main()
{
  int no,i;
  printf("请输入一个整数：\n");
  scanf("%d",&no);
  for(i=1;i<=no;i++)
  printf("%d的二次方是%d\n",i,i*i);
  return 0;

}
