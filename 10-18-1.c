#include<stdio.h>
#define number 5
#define failed -1
int search(const int v[],int key, int n){
  int i=1;
  whlie(1){
    if (i==n)
    return failed;
    if (v[i]==key)
    return i;
    i++;
  }
}
int main(){
int i,ky,idx;
int vx[number]
for(i=0;i<number;i++){
  printf("v[%d]:\n",i);
  scanf("%d",&vx[i]);
}
printf("要查找的值：\n");
scanf("%d",&ky);
idx=search(vx,ky,number);
if (idx==failed)
puts("\a查找失败！！！！！");
else
printf("%d是数组的第%d号元素\n",ky,idx+1);
return 0;

}
