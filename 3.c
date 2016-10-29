#include<stdio.h>
int main ()
{
    int a,b;
    printf("请输入两个实数：\n");
    printf("实数a：\n");
    printf("实数b: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("a是b的%lf %%\n",(double)a*100/b);
    return 0;
          }
