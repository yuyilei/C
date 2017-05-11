#include<stdio.h>
int main () {
    int n , i , j , a[50] , sum = 0 , k , temp ; 
    scanf("%d",&n) ; 
    k = n*n*n ;
    for ( i = 1 ; ; i = i + 2 ){
        sum = 0 ; 
        for ( j = i ; j < i+n*2 ; j = j + 2 ) {
            sum += j ; 
        }
        if ( sum  == k ){
            temp = i ; 
            for ( i = 0 ; i < n ; i++ ){
                printf("%d ",temp ); 
                temp += 2 ;
            }
            printf("\n") ; 
            return 0 ;
        }
    }
}
