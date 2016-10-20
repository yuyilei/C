#include<stdio.h>
void put_count(int n){
  int i;
  for(i=0;i<n;i++){
    printf("put_count:第%d次\n",i+1);
  }
}
int main(){
  int number;
  printf("请输入执行次数：\n");
  scanf("%d",&number);
  put_count(number);
  return 0;
}
