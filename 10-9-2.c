#include<stdio.h>
int main()
{
  int month;
  printf("请输入一个整数：\n");
  scanf("%d",&month);
  switch (month){
    case 3:
    case 4:
    case 5:puts("该月份属于春季");break;
    case 6:
    case 7:
     case 8:puts("该月份属于夏季");break;
     case 9:
     case 10:
    case 11:puts("该月份属于秋季");break;
    case 12:
    case 1:
    case 2:puts("该月份属于冬季");break;
    default:puts("该月份不存在");break;
  }
  return 0;
}
