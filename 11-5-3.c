#include<stdio.h>

int str_chnum( char*s , int c ){
  
  int i = 0;
  while(*s++)
  { 
    if (*s++ == 'c')
    i++;
   }

   return i;
}

int main(){
 int c;
 char s[128];
printf("输入一个字符串\n");
scanf("%s",s);
printf("输入一个字符\n");
scanf("%d",&c);
printf("字符%d出现的次数是%d",c,str_chnum(s,c));
return 0;
}
