#include<stdio.h>
void intrary_rcpy(int v1[],const int v2[],int n){
  int i;
  for(i=0;i<n;i++){
    v1[i]=v2[n-i-1];
    printf("%d\n",v1[i]);
  }
}
int main(){
  int i;
  int n;
  int v1[100];
  int v2[100];
  printf("数组内有几个元素？\n");
  scanf("%d",&n);
  printf("输入%d个元素：\n",n);
  for(i=0;i<n;i++){
    scanf("%d",&v2[i]);
  }
  printf("倒叙排列：\n");
  intrary_rcpy(v1,v2,n);
  return 0;
}
