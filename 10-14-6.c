#include<stdio.h>
#define number 7
int main()
{
  int i;
  int x[number];
  for(i=0;i<=number-1;i++)
  {
    printf("x[%d]:",i);
    scanf("%d",&x[i]);
  }
   printf("倒序排列了！！！\n");
   for (i=0;i<=number;i++)
   {
     x[i]=x[i]+x[number-i];
     x[number-i]=x[i]-x[number-i];
     x[i]=x[i]-x[number-i];
     printf("x[%d]=%d\n",i,x[i]);
   }
   return 0;
}
