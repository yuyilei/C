#include<stdio.h>
void print_bits (unsigned x){
  int i,j;
  unsigned q=~0U;
  for(i=0;q&1U;i++)
  q>>=1;
  for(j=i-1;j>=0;j--)
    printf(((x>>j)&1U)?"1":"0");
}
int main() {
  unsigned int x;
  int pos;
  scanf("%d %d", &x, &pos);
  printf("%d\n", (1<<(pos-1))|x);
  print_bits((1<<(pos-1))|x);
  return 0;
}
