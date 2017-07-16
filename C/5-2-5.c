#include<stdio.h>
int main() {
    long n , high , low , change  ; 
    int flag1 , flag2 ; 
    scanf("%lx",&n) ; 
    printf("n: %#lx\n",n) ;
    high = (n>>16)&0x0000ffff ; 
    low = n&0x0000ffff ;
    flag1 = (high%2)?1:0 ; 
    flag2 = (low%2)?1:0 ; 
    printf("0为偶数，1为奇数\n") ;
    printf("high: %#lx ------%d\nlow: %#lx------%d\n",high,flag1,low,flag2) ;  
    change = (n&0x00ffff00) + ((n&0x000000ff)<<24) + ((n&0xff000000)>>24) ; 
    printf("after change: %#lx\n",change) ; 
    return 0 ; 
}
