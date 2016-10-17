#include<stdio.h>
int min_of(int v[],int n){
  int i;
  int min=0;
  for(i=0;i<n;i++){
    if( v[i]<min);
    min=v[i];
    return min;
  }
}
int main(){
  int number;
  int v[number];
  int i;
  printf("要输入几个值？\n");
  scanf("%d",&number);
  printf("请输入%d个数字\n",number);
  for(i=0;i<number;i++){
  scanf("%d",&v[i]);
    }
    printf("最小值为%d",min_of(v,number));
    return 0;
}
