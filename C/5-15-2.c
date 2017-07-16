#include<stdio.h>
#include<stdlib.h>
#define MAX 1000 
#define NUM 10000   
int main( int argc , char *argv[] ) {
    FILE *fp ; 
    int n = 0 , m = 0 , i ; 
    char ch[10000] ; 
    if ( argc != 4 &&  argc != 2 ){
        exit(0) ; 
    }
    fp = fopen(argv[1],"r") ; 
    if ( fp == NULL ){
        exit(0) ; 
    }
    if ( argc == 4 ) {
        n = atoi(argv[2]) ; //  将命令行参数变为int，不能用(int)(argv[2]-'0')  ;  
        m = atoi(argv[3]) - 1 ; 
    } 
    n = ( n == 0 ) ? 0 : n ; 
    m = ( m == 0 ) ? MAX : m ; 
    for ( i = 0 ; fgets(ch,NUM,fp) ; i++ ){
        if ( i >= n && i <= m ){
            printf("%s",ch) ; 
        }
    }
    return 0 ; 
}
