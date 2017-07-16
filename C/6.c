
#include<stdio.h>
int main()
{
    int a,b,c,min;
    puts("请输入三个整数：\n");
    printf("整数1：");
    scanf("%d",&a);
    printf("整数2；");
    scanf("%d",&b);
    printf("整数3：");
    scanf("%d",&c);
    min=a;
    if (b<min)
    {
        min=b;

    }
   if(c<min) {
    min=c;
   }
   printf("最小值是%d",min);
   return 0;
}
