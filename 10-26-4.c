#include<stdio.h>
int main(){
  int i,j,ch;
  int cnt[10]={0};

  while((ch = getchar())!=EOF){
    if (ch >='0'&& ch<='9'){
      cnt[ch - '0']++;
    }
  }
    puts("数字出现的次数：");
    for(i=0;i<10;i++){
      printf("%d出现的次数是：%d    ",i,cnt[i]);
      for(j=0;j<cnt[i];j++){
         putchar('*');
       }
       printf("\n");
      }
      return 0;
    }
