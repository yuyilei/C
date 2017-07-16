#include<stdio.h>
int main()
{ int retry
  do {
    int no ;
    printf("请输入一个整数：\n");
    scanf("%d",&no);
    if (no>0)
    puts("该整数大于零");
    else if (no<0)
    puts("该整数小于零");
    else
    puts("该整数为零");
    printf("还想再试一次吗  yes-0,no--9");
    scanf("%d",&retry);
  } while (retry==0);
  return 0;
}
