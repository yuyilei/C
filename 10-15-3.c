#include<stdio.h>
#define size 5
int main()
{
  int i,j;
  int sum;
  int a[size]={0};
  int b[size]={1,2,3};
  int c[2][3]={
    {11,22,33},
    {44,55,66},
  };
  for(i=0;i<size;i++){
    printf("a[%d]=%d\n",i,a[i]);
  }
  for(i=0;i<size;i++){
    printf("b[%d]=%d\n",i,b[i]);
  }
  sum=0;
  for(i=0;i<size;i++){
    sum+=a[i];
  }
  printf("数组a的所有元素和为%d\n",sum);
  for(i=0;i<2;i++){
    for(j==0;j<3;j++){
      printf("c[%d][%d]=%d\n",i,j,c[i][j]);
    }
  }
  return 0;
}
