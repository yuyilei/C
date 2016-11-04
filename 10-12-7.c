#include<stdio.h>
int main()
{
  int no,i,a;
  printf("请输入一个整数：\n");
  scanf("%d",&no);
  for(i=1&&a=1;i<=no;i++)
  {
    if(no%i==0)
    printf("%d\n",i);
    a++;
    printf("共有%d个约数。\n",a);
  }
  return 0;

}
