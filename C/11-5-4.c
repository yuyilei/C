/*不用下标实现大小写的转换，还是错的，要改*/
#include<stdio.h>
#include<ctype.h>

void str_toupper(char *s ){
 char *t ;
 while (*s++=*t++){
 t = toupper(t);
}
}

int main (){

char s[128];
printf("输入一个字符串\n");
scanf("%s",s);
str_toupper(s);
printf("大写字母:%s \n",s);
return 0 ;
}
