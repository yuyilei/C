#include<stdio.h>
#include<string.h>
void reverse( char *a ){
    if ( *a == '\0' ){
        return  ; 
    }
    else {
        reverse(a+1) ; 
        printf("%c",*a) ; 
    }
}
int main() {
    char a[40] ;   
    gets(a) ; 
    reverse(a) ; 
}
