#include<stdio.h>
#include<math.h>
int main(){
  float s;
  long double n;
  printf("输入正方形的面积：\n");
  scanf("%f",&s);
  n=sqrt(s);
  printf("%lf",&n);
  return 0;
}
/*为什么，把面积设为double，把边长设为 long double,不可以呢*/
