#include<stdio.h>
// 返回 x 的最低字节 和y剩下的字节 
int main() {

    int x ;
    int y ;
    int res ;

    scanf("%x %x",&x,&y) ;
    
    x = x&0x000000ff ;
    y = y&0xffffff00 ;
    res = x|y ;
    printf("%x %x %x",x ,y,res) ; 

    return 0 ;
} 
