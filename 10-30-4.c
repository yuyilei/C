#include<stdio.h>
int  str_char(const char s[], int c){
   int i;
  for(i=0;s[i];i++){
   if ( s[i]==c+48)
    break;
  }
  return i+1;
}
int main(){
  char s[128];
  int c;
  printf("输入一个字符串\n");
  scanf("%s",s);
  printf("输入一个大于等于0且小于等于9的数字\n");
  scanf("%d",&c);
  printf("%d出现的字符串的第%d位\n",c,str_char(s,c));
  return 0;
}
/*注意数字与字符之间的区别与转换，不要搞混，0-->48，要学习数字与字符之间的转换*/
