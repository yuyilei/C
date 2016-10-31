/*输入一个日期将他改为后一天要考虑闰年的情况*/
#include<stdio.h>
void increase_date(int *y,int *m,int *d){
  if (*y % 4==0,*m==2,*d==28){
    if(*y % 100==0){
      if (*y % 400==0)
      *d=29;
      else {
        *m=3;
        *d=1;
      }
    }
    else
    *d=29;
  }
   else if (*d==30){
    switch (*m){
      case 4 :
      case 6 :
      case 9 :
      case 11 : *m=*m+1; *d=1;  break;
    }
  }
  else if (*d==31){
    switch(*m){
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10: *m=*m+1;*d=1;   break;
      case 12: *y=*y+1; *m=1;*d=1; break;
    }
  }
  else {
    *d =*d+1;
  }

}

int main(){
  int y,m,d;
  printf("请输入一个日期:\n");
  printf("年：\n");
  scanf("%d",&y);
  printf("月：\n");
  scanf("%d",&m);
  printf("日:\n");
  scanf("%d",&d);
  increase_date(&y,&m,&d);
  printf("后一天是%d年%d月%d日",y,m,d);
  return 0;
}
