#include<stdio.h>

int equal(int x , int y){

    return !(x^y) ;       // 等价于 == , 判断是否相等!!

}

int main() {

    int x , y ; // 交换 x , y 的方法 !!

    scanf("%d%d",&x,&y) ;

    y = x ^ y ;
    x = x ^ y ;
    y = x ^ y ;

    printf("%d %d",x,y) ; 

    return 0 ;
}
