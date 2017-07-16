#include<stdio.h>
int main()
{
  int i,j,q;
  for (i=1;i<=9;i++)
  {
    printf("%3d",&i);
    for (j=1;j<=9;j++)
    {
      printf("%3d",j);
      printf("%3d",i*j);
      putchar('\n');
    }
  }
  return 0;
}
