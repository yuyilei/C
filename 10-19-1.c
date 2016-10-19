#include<stdio.h>
void mat (int a[3][4][3]  ){
  int i,j;
for(i=0;i<4;i++){
  for(j=0;j<3;j++){
  a[0][i][j]=a[1][i][j]+a[2][i][j];
  }
}
}
void mat_printf ( const int a[3][4][3]){
  int i,j;
  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      printf("第一次：%d\n",a[1][i][j]);
      printf("第二次：%d\n",a[2][i][j]);
      printf("总分：%d\n",a[0][i][j]);
    }
  }
}
int main(){
int tenus[3][4][3];
tenus[1][4][3]={{32,4,32,},{32,45,65},{32,546,54},{32,23,22}};
tenus[2][4][3]={{32,43,21},{32,43,32},{32,43,43},{54,32,43}};
mat_printf(tenus);
return 0;
