#include<stdio.h>
int main() {
    int n , i , a[20] , max = 0 , min = 0 , temp   ; 
    scanf("%d",&n) ; 
    for ( i = 0 ; i < n ; i++ ){
        scanf("%d",&a[i]) ;
    }
    for ( i = 1 ; i < n ; i++ ){
        min = (a[min] > a[i] ) ? i : min ; 
        max = (a[max] < a[i] ) ? i : max ; 
    }
    temp = a[0] ; 
    a[0] = a[max] ; 
    a[max] = temp ; 
    temp = a[n-1] ; 
    a[n-1] = a[min] ; 
    a[min] = temp ; 
    for ( i = 0 ; i < n ; i++ ){
        printf("%d ",a[i]) ; 
    }
    return 0 ; 
}
