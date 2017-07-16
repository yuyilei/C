#include<stdio.h>
#include<string.h>
int main() {
    int num[128] = {0} , i , len ; 
    char str[40] ; 
    gets(str) ; 
    len = strlen(str) ; 
    for ( i = 0 ; i < len ; i++ ){
        num[str[i]]++ ; 
    }
    for ( i = 0 ; i < 128 ; i++ ){
        if( num[i] != 0 ){
            printf("%c : %d\n",i,num[i]) ; 
        }
    }
    return 0 ; 
}
