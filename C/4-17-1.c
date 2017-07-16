#include<stdio.h>
#include<string.h>
int main() {
    char a[80] ; 
    gets(a) ;
    char *p , *q ;
    p = a ;
    q = a + strlen(a) - 1 ;
    while ( p <= q  ){
        if ( *p != *q  ){
            printf("No!\n") ; 
            return 0 ; 
        }
        p++ ; 
        q-- ;
    }
    printf("Yes!\n") ;
    return 0 ; 
}
