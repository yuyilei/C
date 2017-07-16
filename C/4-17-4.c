#include<stdio.h>
#include<string.h>
char *change(char *a ,int n ){
    static char res[80] ;
    if ( n > strlen(a) ){
        return NULL ;
    }
    int i ;
    for ( i = 0 ; i < strlen(a) - n  ; i++ ){
        res[i] = a[i+n] ;
    }
    int t = i ;
    for ( i = 0  ; i < n  ; i++ ){
        res[t++] = a[i] ;
    }
    return res ; 
}
int main() {
    char a[80],  *p ; 
    int n  ;
    scanf("%s %d",a,&n) ;
    p = change(a,n) ; 
    printf("%s",p) ;
    return 0 ; 
}
