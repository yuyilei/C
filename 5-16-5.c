#include<stdio.h>
int main() {
    int a[3][3] ; 
    int max[3] ; 
    int i , j , temp =0  ; 
    for ( i = 0 ; i < 3 ; i ++ ){
        for ( j = 0 ; j < 3 ; j ++ ){
            scanf("%d",&a[i][j]) ;  
        }
    }
    for ( i = 0 ; i <  3 ; i++ ){
        max[i] = 0  ; 
        for ( j = 1 ; j < 3 ; j++ ){
            if ( max[i] < a[i][j] ){
                max[i] = a[i][j] ; 
            }
        }
    }
    temp = max[0] ; 
    for ( i = 1 ; i < 3 ; i++ ){
        if ( temp > max[i] ){
            temp = max[i] ; 
        }
    }
    printf("%d\n",temp) ; 
}
