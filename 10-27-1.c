/*辗转相除法求最大公约数*/

#include<stdio.h>
 int gcd (int x,int y){
   int i ;
   while (y){
     i=x%y;
     x=y;
     y=i;
   }
     return x;
 }

 int main (){
   int x,y, r;
   printf("输入两个正整数: \n");
   scanf("%d %d",&x,&y);
   int a = (x<y)?y:x;
   int b = (x>y)?y:x;
   printf("%d  和%d 的最大公约数为：",x,y);
   int r = gcd(a, b);
   printf("%d", r);
   return 0;
 }
