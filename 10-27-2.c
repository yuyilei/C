#include<stdio.h>
int main(){
  char str[] = "ABC\0EF";
  printf("字符串str为\"%s\"。\n",str);
  return 0;
}
/* 只会显示ABC*/
