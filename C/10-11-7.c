#include<stdio.h>
int main()
{
  int no;
  printf("请输入一个整数：");
  scanf("%d",&no);
  while (no>=1)
  {
    printf("*\n");
    no--;
  } return 0;
}
