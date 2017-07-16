#include<stdio.h>
int main{
  int min,max,a,b,sum,t;
  puts ("请输入两个整数：");
  scanf("%d%d",&a,&b);
  min=(a<b)?a:b;
  max=(a>b)?a:b;
  sum=0;
  t=min;
  do {
    sum=t+sum;
    t=t+1;
  } while (t<=max&&t>=min);
    printf("大于等于%d小于等于%d的所有整数之和是%d\n",min,max,sum);
  return 0;

}
