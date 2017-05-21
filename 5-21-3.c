#include<stdio.h>
int main() {
    int i , j , k , tmp , a[10] , b[10] ; 
    for ( i = 0 ; i < 10 ; i++ ){
        scanf("%d",&a[i]) ; 
    }
    for ( i = 0 ; i < 10 ; i++ ){
        scanf("%d",&b[i]) ; 
    }
    for ( i = 0 ; i < 9 ; i++ ){
        for ( j = i + 1 ; j < 9 ; j++ ){
            if ( a[j] > a[j+1] ){
                tmp = a[j] ; 
                a[j] = a[j+1] ; 
                a[j+1] = tmp ; 
            }
        }
    }
    for ( i = 0 ; i < 10 ; i++ ){
        k = i ; 
        for ( j = i + 1 ; j < 10 ; j++ ){
            if ( b[k] > b[j]) {
                k = j ;
            }
        }
        if ( k != i ){
            tmp = b[k] ; 
            b[k] = b[i] ; 
            b[i] = tmp ; 
        }
    }
    for ( i = 0 , j = 0 ; i < 10 && j < 10 ; ){
        if ( a[i] < b[j] ){
            printf("%d ",a[i++]) ; 
        }
        else {
            printf("%d ",b[j++]) ; 
        }
    }
    while ( i < 10 ){
        printf("%d ",a[i++]) ; 
    }
    while ( j < 10 ){
        printf("%d ",b[j++]) ; 
    }
    printf("\n") ; 
    return 0 ; 
}
