#include<stdio.h>
void del_digit (char s[]){
  int i;
  for(i=0;s[i];i++){
    if(s[i]>=65)
    putchar (s[i]);
  }
}
int main(){
  int i;
  char s[128];
  printf("输入一个字符串\n");
  scanf("%s",s);
  printf("删去数字字符\n");
  del_digit(s);
  return 0;
}
