#include<stdio.h>
int main()
{
  int tenus[6][2]={0};
  int sum[2]={0};
  int aver[2]={0};
  int every[6]={0};
  int i,j;
  printf("请输入六名学生的语文成绩：\n");
  for(i=0;i<6;i++){
    scanf("%d",&tenus[i][0]);
    sum[0]+=tenus[i][0];
  }
  aver[0]=sum[0]/6;
  printf("请输入六名学生的数学成绩：\n");
  for(i=0;i<6;i++){
    scanf("%d",&tenus[i][1]);
    sum[1]+=tenus[i][1];
  }
  aver[1]=sum[1]/6;
  for(j=0;j<6;j++){
    for(i=0;i<2;i++){
      every[j]+=tenus[j][i];
    }
  }
  printf("各个学生的总分： \n");
  for(j=0;j<=5;j++){
    printf("%d\n",every[j]);
  }
   printf("各个科目的总分和平均分：\n");
   for(i=0;i<2;i++){
    printf("%d  %d\n",sum[i],aver[i]);
   }
  return 0;

}
