#include<stdio.h>
void rev_intrary(int v[],int n){
  int i;
  int q[n];
  for(i=0;i<n;i++){
    q[i]=v[n-i];
    printf("%d",q[i]);
  }
}
int main(){
  int n;
  int i;
  int v[n];
  printf("数组内有几个元素？\n");
  scanf("%d",&n);
  printf("请输入%d个元素：\n",n);
  for(i=0;i<n;i++){
    scanf("%d",&v[i]);
  }
  printf("倒序排列：\n");
  rev_intrary(v,n);
  return 0;
}
