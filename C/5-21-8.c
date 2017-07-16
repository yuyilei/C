#include<stdio.h>
#include<string.h>
char s[80] ; 
void change(long long  n ){
    int i = 0 ; 
    if ( n == 0 ){
        return ; 
    }
    else {
        for ( i = strlen(s) - 1 ; i >= 0 ; i-- ){
            s[i+1] = s[i] ; 
        }   
        s[0] = n % 10 + '0' ; 
        change(n/10) ; 
    }
}
int main() {
    int len , i , j , k ; 
    long long  n ; 
    memset(s,0,80) ; 
    scanf("%lld",&n) ; 
    change(n) ; 
    printf("%s",s) ; 
    return 0 ;
}
