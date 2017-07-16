#include<stdio.h>
#include<string.h>
int main() {
    char s[80] , a[10] ; 
    memset(s,0,80) ; 
    memset(a,0,10) ;
    int len1 , len2 , i , j , n ; 
    gets(s) ; 
    gets(a) ; 
    len1 = strlen(s) ; 
    len2 = strlen(a) ; 
    for ( i = 0 ; i < len1 - len2 ; i++ ){
        if ( strncmp(s+i,a,len2) == 0 ){
            printf("%d\n",i+1) ;
            return 0 ; 
        }
    }
    printf("-1\n") ; 
    return 0 ; 
}
