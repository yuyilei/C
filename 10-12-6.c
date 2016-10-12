#include<stdio.h>
int main()
{
  int no,y,s,i;
  printf("请输入一个整数：");
  scanf("%d",&no);
  y=no%5;
  s=no/5;
  if (y==0)
{
  for(i=1;i<=s;i++)
  printf("*****\n");
} else
{
  for(i=1;i<=s;i++)
  printf("*****\n");
  for(;y>0;y--)
  printf("*");
}
return 0;

}
