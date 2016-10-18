#include<stdio.h>
#define number 5
#define failed -1
int search(int v[],int key,int n){
  int i=0;
  v[n]=key;
  for(i=0;key!=v[i];i++)
  ;
  return (i<n)?i:failed;
}
int main(){
  int i,ky,idx;
  int vx[number+1];
  for(i=0;i<number;i++){
    printf("vx[%d]=\n",i+1);
    scanf("%d",&vx[i]);
  }
  printf("要查找的值：\n");
  scanf("%d",&ky);
  idx=search(vx,ky,number);
  if(idx==failed)
  puts("\a查找失败\n");
  else
  printf("%d是数组内的第%d号元素\n",ky,idx+1);
  return 0;
}
