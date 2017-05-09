#include<stdio.h>
#include<stdlib.h>
int main( int argc , char *argv[] ) {
    int m = 0 , n = 0 , i , j , all = 250 , flag = 0 ; 
    FILE *fp ; 
    char string[250] ; 
    if ( argc != 2 &&  argc != 4 ){
        printf("input number is wrong!") ;
        exit(0) ; 
    }
    if ( argc == 4 ){
        m = atoi(argv[2]) ; 
        n = atoi(argv[3]) ; 
    }
    int  a = ( m == 0 ) ? 0 : m ; 
    int  b = ( m == 0 ) ? 250 : n ; 
    if ( ( fp = fopen(argv[1],"r") ) == NULL ){
        printf("can not open it!") ; 
        exit(0) ; 
    }
    for ( i = 0 ; i < m ; i++ ){
        if ( fgets(string,all,fp) == NULL ){
            flag = 1 ;
            break ; 
        }
    } 
    for ( i = m ; i < b ; i++ ){
        if ( fgets(string,all,fp) == NULL ) {
            break ; 
        }
        printf("%s",string) ;
    }
    fclose(fp) ; 
    return 0 ; 
}
