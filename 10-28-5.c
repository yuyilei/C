#include<stdio.h>
int main(){
  int i;
  char s[3][128];
  for(i=0;i<3;i++){
    printf("s[%d]:\n",i);
    scanf("%s",s[i]);
    if (s[i]=='$$$$$$')
      break;

  }
  for(i=0;i<3;i++){
   if (s[i]=='$$$$$$')
      break;
    printf("s[%d]=%s",i,s[i]);

  }
  return 0;
}
