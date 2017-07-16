#include<stdio.h>
#include<string.h>
char *change(char *p ,int  m ,int n ) {
    static char str[80] ;
    if ( m < 0 || n < 0 || m >= strlen(p)) {
        return NULL ;
    }
    int i ; 
    for ( i = 0 ; i < n ; i++ ){
        str[i] = p[m+i] ;
    }
    return str ; 
}
int main() {
    char a[80] ; 
    int m , n ; 
    gets(a) ;
    char *p = a ; 
    scanf("%d%d",&m,&n) ;
    char *q = change(p,m,n) ;
    printf("%s",q) ; 
    return 0 ; 
}
