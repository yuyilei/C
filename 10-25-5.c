#include<stdio.h>
int main(){
  int i;
  float x;
  float n=0.0;
  for(i=1;i<=100;i++){
    x=i/100.0;
    n=n+0.01;
    printf("n=%f\n",n);
    printf("x=%f\n",x);

  }
  return 0;
}
/*为什么i必须除以100.0，而不是100；
注意：判断循环的基准使用的变量应该是整数，而不是浮点数，因为浮点数，可能，会某一位发生数据丢失*/
