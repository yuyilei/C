#include<stdio.h>
int main() {
    int n , m , i , t , s;
    scanf("%d%d",&n,&m) ;
    s = ( m >= n ) ? n : m ;
    for ( i = s ; i >= 1 ; i -- ) {
        if( ( n % i == 0 ) && ( m % i == 0) ){
            printf("%d\n",i) ;
            return 0  ;
        }
    }
}
