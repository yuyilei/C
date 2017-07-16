#include<stdio.h>
int main() {
    int n , i , k , j ; 
    for ( n = 100 ; n <= 999 ; n++ ){
        i = n / 100 ; 
        j = ( n - i*100) / 10 ; 
        k = n % 10 ; 
        if ( n == k*k*k + j*j*j + i*i*i ){
            printf("%d ",n) ; 
        }
    }
    return 0 ; 
}
