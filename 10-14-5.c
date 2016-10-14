#include<stdio.h>
int main()
{
  int i;
  int a[5]={32,55,67,34,53,};
  int b[5];
  for(i=0;i<=4;i++)
  b[i]=a[4-i];
  puts(" a   b");
  puts(" -----");
  for(i=0;i<=4;i++)
  printf("%3d%3d\n",a[i],b[i]);
  return 0;
}
