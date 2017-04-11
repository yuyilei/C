#include<stdio.h>
void change( int a[] , int b[], int n ) ;
int main () {
    int n , a[20] , b[20] ;
    scanf("%d",&n) ;
    printf("int a :") ;
    for ( int i = 0 ; i < n ; i++ ){
        scanf("%d",&a[i]) ;
    }
    printf("input b :") ;
    for ( int i = 0 ; i < n ; i++) {
        scanf("%d",&b[i]) ;
    }
    change(a,b,n) ;
    for ( int i = 0 ; i < n ; i++) {
        printf("%d ",a[i]) ;
    }
    printf("\n") ;
    for ( int i = 0 ; i < n ; i++ ){
        printf("%d ",b[i]) ;
    }
    return 0 ;
}

void change( int a[] , int b[], int n) {
    int i , k ;
    for ( i = 0 ; i < n ; i++) {
        k = a[i] ;
        a[i] = b[i] ;
        b[i] = k ;
    }
}
