#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int GetMonth( char *str) ;
char *month[] = {"Janunary" ,"February" , "March" , "April" , "May" ,"June", "July" , "August" , "September" , "October" , "November","December" } ;

int main (int argc , char *argv[]) {
    int k ;
    if ( argc != 2 ) {
        printf("error!") ;
        exit(0) ; 
    }
    k = GetMonth(argv[1]) ;
    if ( k == -1 ){
            printf("erroe!!!") ;
            exit(0) ;
        }
    printf("%s\n",month[k-1]) ;
    return 0 ;
}

int GetMonth(char *str) {
    int k, i = 0; 
    while ( str[i] != 0 ){
        if ( str[i] < '0' || str[i] > '9') {
            return (-1) ;
        }
        else i++ ;
    }
    k = atoi(str) ; // 原来可以这样233
    if ( k < 0 || k > 12 ){
        return (-1) ;
    }
    return k ; 
}
