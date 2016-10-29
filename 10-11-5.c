#include<stdio.h>
int main()
{
  int a ,i=2;
  printf("请输入一个整数：");
  scanf("%d",&a);
  if (a%2==0)
 {
   while(i<=a)
  { printf("+-");
   i=i+2;}
 } else {
   while(i<=a)
   {
     printf("+-");
     i=i+2;
   }
   printf("+");
 } return 0;
}
