#include<stdio.h>
#include<string.h>
void reverse( char a[] ){
    if ( strlen(a) == 1 ){
        printf("%c",a[0]) ; 
        return  ; 
    }
    else {
        char temp[5] ; 
        strncpy(temp,a,strlen(a)-1) ; 
        printf("%c",a[strlen(a)-1]) ; 
        reverse(temp) ; 
    }
}
int main() {
    char a[5] = { '1' ,'2' , '3', '4'} ; 
    reverse(a) ; 
}
