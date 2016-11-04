/*将3个数进行升序排列*/
#include<stdio.h>
void sort3 (int *n1,int *n2,int *n3){
   if (*n1>*n2)
    swap(n1,n2);
    if (*n2>*n3)
    swap(n2,n3);
    if (*n1>*n3)
    swap(n1,n2);
    if (*n1>*n2)
    swap(n1,n2);
}
void swap(int *i,int *j){
  *i=*i+*j;
  *j=*i-*j;
  *i=*i-*j;
}
int main(){
  int n1,n2,n3;
  printf("请输入三个整数\n");
  scanf("%d %d %d "&n1,&n2,&n3);
  sort3(&n1,&n2,&n3);
  printf("升序排列：%d  %d  %d",n1,n2,n3);
  return 0;
}
/*未解：为什么每次输入4个数时才显示结果，而且怎样比较次数比较少？*/
