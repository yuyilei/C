#include<stdio.h>
#include<string.h>
int main() {
    char str[100] , *b , *e ;
    scanf("%s",str) ;
    int i , len = strlen(str) ;
    b = str ;
    e = str + len - 1 ;
    while ( b < e ){
        if ( *b != *e ){
            printf("No!") ;
            return 0 ; 
        }
    }
    printf("Yes") ;
    return 0 ; 
}
