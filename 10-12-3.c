#include<stdio.h>
int main()
{
  int start,end,no,a;
  printf("开始数值：\n");
  scanf("%d",&start);
  printf("结束数值：\n");
  scanf("%d",&end);
  printf("间隔数值：\n");
  scanf("%d",&no);
  for(a=start;a<=end;a+=no)
  printf("%dcm\n",a);
  return 0;
}
