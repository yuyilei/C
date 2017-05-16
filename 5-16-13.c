#include<stdio.h>
int main() {
    int a[6] , i , j  ;
    for ( i = 0 ; i < 6 ; i++ ){
        scanf("%d",&a[i]) ;         
    }
    for ( i = 0 ; i < 6 ; i++ ){
        for ( j = 6 - i ; j < 6  ; j++ ){
            printf("%d ",a[j]) ; 
        }
        for ( j = 0 ; j < 6 - i ; j++ ){
            printf("%d ",a[j]) ;
        }
        printf("\n") ; 
    }
    return 0 ; 
}
