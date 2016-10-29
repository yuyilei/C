#include<stdio.h>
enum month {January ,February ,March, April, May, June ,July, August ,September, October, November ,December};
int main(){
  int month;
  printf("0~11的值：\n");
  scanf("%d",&month);
  printf("你选择了：\n");
  switch (month) {
    case 0: printf("一月\n");break;
    case 1: printf("二月\n");break;
    case 2: printf("三月\n");break;
    case 3: printf("四月\n");break;
    case 4: printf("五月\n");break;
    case 5: printf("六月\n");break;
    case 6: printf("七月\n");break;
    case 7: printf("八月\n");break;
    case 8: printf("九月\n");break;
    case 9: printf("十月\n");break;
    case 10:printf("十一月\n");break;
    case 11:printf("十二月\n");break;
    }
  return 0;
}
