#include<stdio.h>
#define ALL 30 
void change( int a[] , int n , int s , int e ){
    int i , j , k = s ; 
    for ( i = 0 ; i < n ; i++ ){
        a[i] = i + 1 ; 
    }
    for ( i = 30 ; i >= 2 ; i -- ){
        k = ( k + e - 1 ) % i ;
        if ( k == 0 ){
            k = i ; 
        }
        int t = a[k-1] ; 
        for ( j = k ; j < i ; j ++ ){
            a[j-1] = a[j] ; 
        }
        a[i-1] = t ; 
    }
}
int main() {
    int a[ALL] , i , n  ;
    scanf("%d",&n) ; 
    change(a,ALL,1,n) ; 
    for ( i = ALL - 1 ; i>= 0  ; i -- ){
        printf("%3d ",a[i]) ; 
        if (  i % n == 0 && i != ALL - 1 ){
            printf("\n") ; 
        }
    }
    return 0 ; 
}
