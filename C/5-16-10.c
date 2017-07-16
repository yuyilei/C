#include<stdio.h>
int main() {
    int n , tmp1 = 0 ,  tmp2 = 0 ; 
    scanf("%d",&n) ; 
    while ( n > 0 ){
        tmp1 = n % 10 ; 
        tmp2 = 10*tmp2 + tmp1 ; 
        n /= 10 ; 
    }
    printf("%d\n",tmp2) ; 
    return 0 ; 
}
