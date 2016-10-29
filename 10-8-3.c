
#include<stdio.h>
int main ()
{
  int a;
  printf("请输入一个月份的数值：\n");
  scanf("%d",&a);
  if (a>=3 && a<=5)
 puts("该月份属于春季");
  else if (a>=6 && a<=8)
 puts("该月份属于夏季");
  else if(a>=9 && a<=11)
 puts("该月份属于秋季");
  else if (a==12 || a==1 || a==2)
 puts("该月份属于冬季");
 else
 puts("该月份不存在");
  return 0;
}
