#include<stdio.h>
#define number 5

void bsort(int a[number],int n){
  int i,j;
  for(i=0;i<n-1;i++){
    for(j=n-1;j>i;j--){
      if (a[j-1] < a[j]){
        a[j]=a[j]+a[j-1];
        a[j-1]=a[j]-a[j-1];
        a[j]=a[j]-a[j-1];
      }
    }
  }
}

int main(){
  int i;
  int height [number];

  printf("请输入%d人的身高：\n",number);
    for(i=0;i<number;i++){
      printf("%2d号：\n",i+1);
      scanf("%d",&height[i]);
    }
    bsort (height ,number);
    puts("按降序排列:");
    for(i=0;i<number;i++){
      printf("%2d号：%d\n",i+1,height[i]);
    }
    return 0;
  }
