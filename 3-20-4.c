#include<stdio.h>

int main () {

    int a[6] ;
    int i , j ; 

    for ( i = 0 ; i < 6 ; i++) 
        scanf("%d",&a[i]) ;

    for ( i = 0 ; i < 6 ; i ++) {
    
        for ( j = 0 ; j < 6 ; j++) {
            
            int temp = (6 - i + j) % 6 ;
            printf("%3d",a[temp]) ;
        }
        printf("\n") ;
    }

    return 0 ; 
}
