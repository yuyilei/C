/*利用指针对5位学生的分数进行降序排列*/
#include<stdio.h>
#define number 5
void change(int *i, int *j){
  *i = *i + *j;
  *j = *i - *j;
  *i = *i - *j;
}
 void bsort (int a[],int n){
   int i,j;
   for(i=0;i<n-1;i++){
     for(j=n-1;j>i;j--){
       if (a[j-1]<a[j])
       change (a[j-1],a[j]);
     }
   }
 }
int main(){
  int i ;
  int point [number];
  printf("请输入%d人的分数。\n",number);
  for(i=0;i<number;i++){
    printf("%2d号:",i+1);
    scanf("%d",&point[i]);
  }
  bsort (point ,number);
  puts("按降序排列\n");
  for(i=0;i<number;i++)
   printf("%2d 号:%d\n",i+1,point [i]);
   return 0;
}
