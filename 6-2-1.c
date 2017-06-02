#include<stdio.h>
#include<string.h>
int main() {
    int a[128] = {0} , i , len ; 
    char b[50] ; 
    gets(b) ; 
    len = strlen(b) ;  
    for ( i = 0 ; i < len ; i++ ){
        a[b[i]]++ ; 
    }
    for (  i = 0 ; i < 128 ; i ++ ){
        if ( a[i] != 0 ){
            printf("%c : %d \n",i,a[i]) ; 
        }
    }
    return 0 ; 
}
