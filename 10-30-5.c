#include<stdio.h>
int str_chnum(char s[],int c){
  int i;
   int q=0;
   for(i=0;s[i];i++){
     if (s[i]==c+48)
     q++;
   }
   return q;
}
int main(){
  char s[128];
  int c;
  printf("请输入一个字符串\n");
  scanf("%s",s);
  printf("请输入一个大于等于0小于等于9的数字\n");
  scanf("%d",&c);
  printf("字符串中%d出现的次数是：%d",c,str_chnum(s,c));
  return 0;
}
/*统计字符串中的某字符出现的次数*/
