#include<stdio.h>
void print_bits (unsigned x){
  int i,j;
  unsigned q=~0U;
  for(i=0;q&1U;i++)
  q>>=1;
  for(j=i-1;j>=0;j--)
    printf(((x>>j)&1U)?"1":"0");
}
void rrotate (unsigned x,int n){
  print_bits(x>>no);
}
 int main(){
   unsigned x,n;
   printf("非负整数：\n");
   scanf("%u",&x);
   printf("位移位数：\n");
   scanf("%u",&n);
    rrotate(x,n);
    return 0;

 }
