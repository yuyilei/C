/*用指针进行加减运算*/
#include<stdio.h>
void sum_diff(int i ,int j,int *sum,int *diff){
  *sum=j+i;
  *diff=(i>j)?(i-j):(j-i);
}
int main(){
  int i,j;
  int sum=0,diff=0;
  printf("请输入两个整数\n");
  scanf("%d %d",&i,&j);
  sum_diff(i,j,&sum,&diff);
  printf("两数之和是%d,两数之差是%d",sum,diff);
  return 0;
}
