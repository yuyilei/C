
#include<stdio.h>
int main()
{
    int a;
    double b;
    printf("请输入您的身高：\n");
    scanf("%d",&a);
    b=(a-100)*0.9;
    printf("您的标准体重是：%.1f\n",b);
    return 0;
}
