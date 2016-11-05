#include<stdio.h>
void* str_copy(char *d,const char*s){
 
 char *t=d;
 while (*d++=*s++)
 printf("%s",t);
}
int main(){

char str[128]="ABC";
char tmp[128];
 printf("str=\"%s\"\n",str);
 printf("要复制的是：");
 scanf("%s",tmp);

 printf("复制了\n");
 printf("str = \n");
 str_copy (str,tmp);
 
return 0;
}
