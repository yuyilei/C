#include<stdio.h>
int main()
{ int no;
  do
  {printf("请输入一个正整数：");
  scanf("%d",&no);
    if (no<=0)
    puts("请不要输入小于等于零的数\a");
  } while (no<=0);
  printf("%d的逆向显示结果是：",no);
   while(no>0){
     printf("%d",no%10);
     no/=10;
   } return 0;
}
