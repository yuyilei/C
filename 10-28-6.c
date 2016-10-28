#include<stdio.h>
#define number 5
void null_string(char s[]){
  int i;
  for(i=0;i<number;i++){
    s[i]='\0';
  }
  printf("%s",s);
}
int main(){
  char s[];
  printf("全为空字符的字符串。 \n");
  null_string(s[]);
  return 0;
}
