#include<stdio.h>
#include<math.h>
void prime( int j , int n  , int k ){
    while ( j <= n ){
        if ( k % j == 0 ){
            return ; 
        }
        j += 1 ; 
    }
    printf("%6d",k) ; 
    return ; 
}
int main() {
    int i , m , n ; 
    m = 3 ; 
    while (  m < 200 ){
        i = 2 ;
        n = sqrt(m+0.001) ;
        prime(i,n,m) ; 
        m += 2 ;
    }
    return 0 ; 
}
