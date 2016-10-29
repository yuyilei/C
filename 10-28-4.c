
#include<stdio.h>

int count_bits(unsigned int x) {
  int bits=0;
  while(x) {
    if (x & 1U){
      bits++;
    }
    x >>= 1;
  }
  return bits;
}

void print_bits(unsigned int x){
  /* 把x*/
  int i;
  for(i=count_bits(~0U)-1; i>=0; i--){
    printf(
      ((x >> i)&1U)?"1":"0"
    );
  }
}

int main(){
 unsigned i;
 printf("输入一个整数：\n");
 scanf("%u",&i);
 print_bits (i);
 return 0;
}
