
#include<stdio.h>
int main()
{
    int a,b,c,min;
    puts("����������������\n");
    printf("����1��");
    scanf("%d",&a);
    printf("����2��");
    scanf("%d",&b);
    printf("����3��");
    scanf("%d",&c);
    min=a;
    if (b<min)
    {
        min=b;

    }
   if(c<min) {
    min=c;
   }
   printf("��Сֵ��%d",min);
   return 0;
}
