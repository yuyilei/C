/*判断字符串的长度*/
#include<stdio.h>
int str_length(const char s[]){
  int len=0;
  while (s[len])
    len++;
    return len;

}
int main(){
  char s[128];
  printf("请输入字符串 \n");
  scanf("%s",s);
  printf("字符串\"%s\"的长度是%d",s,str_length(s));
  return 0;
}
