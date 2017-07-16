#include<stdio.h>
void getint( int a[] ){
    for ( int i = 0 ; i < 10 ; i++ ){
        scanf("%d",&a[i]) ; 
    }
}
void sort1( int a[] ){
    int i , j , k , tmp ; 
    for ( i = 0 ; i < 9 ; i++ ){
        k = i ; 
        for ( j = i + 1 ; j < 10 ; j++ ){
            if ( a[j] > a[k] ){
                k = j ; 
            }
        }
        if ( k != i ){
            tmp = a[i] ; 
            a[i] = a[k] ; 
            a[k] = tmp ; 
        }
    }
}
void sort2( int a[] ){
    int i , j , tmp ; 
    for ( i = 0 ; i < 10 ; i++ ){
        for ( j = 0 ; j + i < 10 - 1 ; j++ ){
            if ( a[j] > a[j+1] ){
                tmp = a[j] ; 
                a[j] = a[j+1] ; 
                a[j+1] = tmp  ; 
            }
        }
    }
}
int main() {
    int a[10] , i , j , b[10] ; 
    getint(a) ; 
    getint(b) ; 
    sort1(a) ; 
    sort2(b) ; 
    for ( i = 0 ; i < 10 ; i++ ){
        printf("%d ",a[i]) ; 
    }
    printf("\n") ; 
    for ( i = 0 ; i < 10 ; i++ ){
        printf("%d ",b[i]) ; 
    }
    return 0 ; 
}
