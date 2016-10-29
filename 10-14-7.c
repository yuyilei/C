#include<stdio.h>
int main()
#define number 5
{
  int i;
  int tenus[number];
  int min,max;
  printf("请输入%d名学生的成绩：\n",number);
  for (i=0;i<=number-1;i++){
    printf("%d号：",i+1);
    scanf("%d",&tenus[i]);
  }
  min=max=tenus[0];
   for (i=0;i<=number-1;i++){
     if (min>tenus[i]) min=tenus[i];
     if (max<tenus[i]) max=tenus[i];
   }
   printf("最高分：%d\n",max);
   printf("最低分：%d\n",min);
   return 0;
}
