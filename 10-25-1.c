#include<stdio.h>
int main(){
  float a;
  double b;
  long double c;
  printf("输入三个数的值：\n");
  printf("a: \n");
  scanf("%f",&a);
  printf("b: \n");
  scanf("%f",&b);
  printf("c:\n");
  scanf("%lf",&c);
  printf("%f %f %lf",a,b,c);
  return 0;
}
