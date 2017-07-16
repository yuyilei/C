#include<stdio.h>
int main() {
    int i , j , k ; 
    for ( i = 1 ; i <= 28 ; i++ ){
        for ( j = 1 ; j <= 72 ; j++ ){
            k = 100 -i - j ; 
            if ( 150 == k + i*5 + j*2 ){
                printf("1:%d  2:%d  5:%d \n",k,j,i) ; 
            }
        }
    }
    return 0 ; 
}
