#include<stdio.h>
#define number 5
int max_of(int v[],int n){
  int i;
  int max_of=v[0];
  for(i=1;i<n;i++){
    if (v[i]>max)
    max=v[i];
    return max;
  }
}
int main(void){
  int i;
  int eng[number];
  int mat[number];
  int max_e,max_m;
  printf("请输入%d名学生的分数\n",number);
  for(i=0;i<number;i++){
    printf("[%d]英语：\n",i+1);
    scanf("%d",&eng[i]);
    printf("数学：\n");
    scanf("%d",&mat[i]);

  }
  max_e=max_of(eng,number);
  max_m=max_of(mat,number);
  printf("英语最高分是：%d\n",max_e);
  printf("数学最高分是：%d\n",max_m);
  return 0;
}
