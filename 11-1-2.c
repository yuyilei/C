/*为所有的值赋上与下标相同的值*/
#include<stdio.h>
void set_idx(int *v,int n){
  int i ;
  for(i=0;i<n;i++){
    *v[i]=i+1;
  }
}
int main(){
  int v ;
  int i ;
  int n ;
  printf("输入一个正整数\n");
  scanf("%d",&n);
  set_idx(&v,n);
  printf("v[%d] = %d",i+1,v[i]);
  return 0;
}
/*仍有错误，要改，指针有点迷糊*/
