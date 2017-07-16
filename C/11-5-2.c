#include<stdio.h>
void* put_string ( char *s){

 char *t = s ;
 while (*s++>=0 )
 printf("%s",t);
}

int main(){

 char s[128] ;
 printf("输入一个字符串：\n");
 scanf("%s", s);
 printf("显示字符串\n");
 put_string (s);
 return 0;
}
/*为什么 const char *s 不能 char *t = s，只有char *s 可以，而且为什么输入一个12345,会输出很多12345呢*/
