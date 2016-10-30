#include<stdio.h>
void put_stringn(const char s[], int n){
  int i;
  for(i=0;i<n;i++){

  }
}

int main(){
  char s[128];
  int n;
  printf("请输入一个字符串\n");
  scanf("%s",s);
  printf("重复几次字符串？\n");
  scanf("%d",&n);
  printf("字符串重复%d次的结果是：\n");
  put_stringn(s,n);
  return 0;
}
/*重复字符串*/
