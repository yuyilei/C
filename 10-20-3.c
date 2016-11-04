#include<stdio.h>
int main(){
  int n;
  printf("sizeof 1=%d",sizeof 1);
  printf("sizeof +1=%d",sizeof +1);
  printf("sizeof -1=%d",sizeof -1);
  printf("sizeof(unsigned)-1=%d",sizeof(unsigned)-1);
  printf("sizeof(double)-1=%d",sizeof(double)-1);
  printf("sizeof((double)-1)=%d",sizeof((double)-1));
  printf("sizeof n+2=%d",sizeof n+2);
  printf("sizeof (n+2)=%d",sizeof (n+2));
  printf("sizeof (n+2.0)=%d",sizeof (n+2.0));
  return 0;
}
