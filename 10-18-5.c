#include<stdio.h>
int search_idx(const int v[], idx[],int key,int n){
  int i=0,q=0;
  printf("{");
  for(i=0;i<n;i++){
if (key==v[i]){
    q++;
    idx[q]=i+i;
    printf("%d",idx[q]);
  }
  }
  printf("}");
  printf("%d",q);
}
int main(){
  int vx[100];
  int dix[100];
  int i,key,n;
  printf("数组内有几个元素：\n");
  scanf("%d",&n);
  printf("请输入%d个元素\n",n);
  for(i=0;i<n;i++){
    scanf("%d",&v[i]);
  }
  printf("请输入要查找的值：\n");
  scanf("%d",&key);
  search_idx(vx,idx,key,n);
  return 0;
}
