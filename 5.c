
#include<stdio.h>
int main()
{
    int no;
    printf("������һ��������");
    scanf("%d",&no);
    if (no==0)
        printf("����ֵΪ0");
    else if (no>0)
      printf("����ֵΪ%d",no);
      else if(no<0)
        printf("����ֵΪ%d",-no);
     return 0;
}
