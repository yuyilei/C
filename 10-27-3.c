#include<stdio.h>
int main(){
  char s[] = "ABC";
  int i;
  for(i=0;i<4;i++){
    s[i]="";
  }
  printf ("%s",s);
  return 0;

}
