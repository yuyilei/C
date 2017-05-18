#include<stdio.h>
#include<string.h>
int main() {
    char in[80] , tmp ;
    int i , j , k , len ;
    gets(in) ; 
    len = strlen(in) ; 
    for ( i = 1 ; i < len - 1 ; i += 2 ){
        k = i ; 
        for ( j = i + 2  ; j < len  ; j += 2 ){
            if ( in[j] > in[k] ){
                k = j ; 
            }
        }
        if ( k != i ){
            tmp = in[i] ;   
            in[i] = in[k] ; 
            in[k] = tmp ; 
        }
    }
    for ( i = 0 ; i < len ; i++ ){
        printf("%c ",in[i]) ; 
    }
    return 0 ;
}
