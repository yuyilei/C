
#include<stdio.h>
int main()
{
    int no;
    printf("请输入一个整数：");
    scanf("%d",&no);
    if (no==0)
        printf("绝对值为0");
    else if (no>0)
      printf("绝对值为%d",no);
      else if(no<0)
        printf("绝对值为%d",-no);
     return 0;
}
