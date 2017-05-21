#include<stdio.h>
int main() {
    int a[12] = { 1 , 3 , 5 , 7 , 9 , 11, 13 ,15 , 17 , 19 } , i , k , tmp ; 
    scanf("%d",&k) ; 
    for ( i = 9 ; i > 0 ; i-- ){
        if ( a[i] > k ){
            a[i+1] = a[i] ; 
        }
        else {
            break ; 
        }
    }
    a[i+1] = k ; 
    for ( i = 0 ; i < 11 ; i++ ){
        printf("%d ",a[i]) ; 
    }
    printf("\n") ; 
    return 0 ; 
}
