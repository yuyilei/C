#include<stdio.h>
int main(){
  int i,ch;
  int cnt[10]={0};

  while((ch = getchar ()) != EOF)
    if (ch >='0' && ch<='9'){
      cnt[ch-'0']++;
    }
    printf("数字出现的次数：\n");
    for(i=0;i<=9;i++){
      printf("%d:",i);
      for(;cnt[i]>0;cnt[i]--)
      printf("*");
      printf("\n");
    }
    return 0;
  }
/*用星星的个数来表示出现的数字的个数*/
