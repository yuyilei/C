#include<stdio.h>
int main()
{
  int no,i=0;
  printf("请输入一个整数：");
  scanf("%d",&no);
  while(no>0){
    no/=10;
    i++;
  }
  printf("该整数的位数是：%d",i);
  return 0;
}
