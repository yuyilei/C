#include<stdio.h>

int count_bits(unsigned int x) {
  // 统计无符号整数x的位数
  int bits=0;
  while(x) {
    if (x & 1U){
      bits++;
    }
    x >> = 1;
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

void rrotate_bits (unsigned x, int n){
  print_bits(x >> n);
}

void chu_bits(unsigned x,int n){
  print_bits(x/n);
}

int main() {
  unsigned no;
  int i, j, q, e;
  do{
    printf("请输入一个小于%u的数\n", ~0U);
    scanf("%u", &no);
  }while(no >= ~0U);
  printf("向右位移几位？\n");
  scanf("%d", &j);
  for(q=0, e=1; q<j; q++){
    e=e*2;
  }
  print_bits(no);
  printf("向右位移%d位的值是：",j);
  rrotate_bits(no,j);
  printf("\n");
  print_bits(no);
  printf("除以%d的值是：",e);
  chu_bits(no, e);
  return 0;
}
