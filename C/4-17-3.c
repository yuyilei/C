#include<stdio.h>
#include<string.h>
char *change(char *a ){
    static char p[80] ;
    int i = 0 , t = 0 ; 
    while ( a[i] != '\0') {
        if (!( a[i] >= '0' && a[i] <= '9' )){
            p[t++] = a[i] ;
        }
        i++ ; 
    }
    return p ; 
}
int main () {
    char a[80] , *p ; 
    scanf("%s",a) ;
    p = change(a) ;
    printf("%s",p) ;
    return 0 ;
}
