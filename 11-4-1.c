/*用结构体表示信息*/
#include<stdio.h>

#define Name 64

struct student {
  char name[Name];
  int height ;
  float weight ;
  long schols ;
};
 int main(){

 struct student takao = {"takao",173 ,86.2,34999};
 
 printf("姓名：%s 地址：%p\n",takao.name,&takao.name);
 printf("身高：%d 地址: \n",takao.height);
 printf("体重: %.1f 地址：\n",takao.weight);
 printf("奖学金: %ld 地址：\n",takao.schols);

 return 0;
}

