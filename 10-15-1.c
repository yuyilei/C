#include<stdio.h>
#define number 80
int main()
{
  int i,j;
  int num;
  int tenus[number]={0};
  int bunqu[11]={0};
  printf("请输入学生人数：\n");
  do{
    scanf("%d",&num);
    if(num>number||num<=0){
      printf("请输入从1到%d的数！！！\n",number);
    }
  } while(num>number||num<=0);
   printf("请输入%d人的分数\n",num);
   for(i=0;i<=num-1;i++){
     printf("%d号:",i+1);
     do{
       scanf("%d",&tenus[i]);
       if(tenus[i]>100||tenus[i]<0){
         printf("请输入1到100的数\n");
       }
       bunqu[tenus[i]/10]++;
     } while(tenus[i]>100||tenus[i]<0);
   }puts("\n----分布图----");
   for(i=0;i<=9;i++){
     printf("%3d~%3d:",i*9,10+i*9);
       for(j=0;j<bunqu[i];j++){
         printf("*");
       }printf("\n");
     }
     printf("  100:\n");
     for(j=0;j<bunqu[10];j++){
       printf("*");
     }printf("\n");

  return 0;
}
