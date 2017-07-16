#include<stdio.h>
int main() {
    int n , m , t , i ;
    scanf("%d%d",&n,&m) ;
    t = 1 ;
    if (  m < n ) {
        for ( i = 1 ; i < m ; i++){
            if ( (m % i ==0 ) && ( n % i == 0 ) ){
                t = i ;
            }
        }
    printf("%d\n",t) ; 
    }
    if ( m >= n ){
        for ( i = 1 ; i < n ; i++) {
            if ( ( n % i== 0)&& ( m % i == 0)) {
                t = i ;
            }
        }
    printf("%d\n",t) ;
    }
    return 0 ; 
}
