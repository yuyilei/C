#include<stdio.h>
int main() {
    int a[12][12] , i , j , n ;
    do {
        scanf("%d",&n) ; 
    } while  ( n <= 0 || n > 12 ) ;
    for ( i = 0 ; i < n ; i++ ){
        a[i][0] = 1 ; 
        a[i][i] = 1 ; 
        for ( j = 1 ; j < i ; j++ ){
            a[i][j] = a[i-1][j-1] + a[i-1][j] ; 
        }
    }
    for ( i = 0 ; i < n ; i++ ){
        for ( j = 0 ; j < n - i ; j ++ ){
            printf("  ") ; 
        }
        for ( j = 0 ; j <= i ; j++ ){
            printf("%-3d ",a[i][j]) ; 
        }
        printf("\n") ; 
    }
    return 0 ; 
}
