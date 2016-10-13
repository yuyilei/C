#include<stdio.h>
int main()
{
  int a,b,i,j,min,max;
  printf("让我们做一个长方形吧\n");
  printf("一边：\n");
  scanf("%d",&j);
  printf("另一边：\n");
  scanf("%d",&i);
  if (i>j)
 {
   max=i;min=j;
 } else {
   max=j;min=i;
 }
 for (a=1;a<=min;a++)
 {
   for(b=1;b<=max;b++)
   {
     printf("*");
   }
   printf("\n");
 } return 0;
}
