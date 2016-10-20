#include<stdio.h>
void func(void){
  static int d[3][2]={{0.0,0.0,0.0},{0.0,0.0,0.0}};
  int i,j;
  for(i=0;i<3;i++){
    for(j=0;j<2;j++){
      printf("%d\n",d[i][j]);
    }
  }
}
 int main(){
   func();
   return 0;
 }
