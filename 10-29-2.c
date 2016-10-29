#include<stdio.h>
#define number 8
int main(){
  int i;
  char s [number] [128]={0};
  for(i=0;i<number&&s[i]!="$$$$$$";i++){
    printf("%d:",i+1);
    scanf("%d",s[i]);
  }
  for(i=0;i<number&&s[i]!="$$$$$$";i++);
  printf("s[%d]:\"%s\"\n",i+1,s[i]);
  return 0;

}
/*还有问题*/
