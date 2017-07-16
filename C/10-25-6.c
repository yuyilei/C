#include<stdio.h>
int main(){
  int i;
  float x,sum1=0.0,sum2=0.0;
  float n=0.0;
  for(i=1;i<=100;i++){
  x=i/100.0;
  sum1=sum1+x;
  n=n+0.01;
  sum2=sum2+n;
  printf("x=%f    sum1=%f\n",x,sum1);
  printf("n=%f    sum2=%f\n",n,sum2);

  }
  return 0;
}
