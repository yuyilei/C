#include<stdio.h>
#include<string.h>
int find ( char *a , char *b ){
    int i = 0 , count = 0 , len1 , len2 ; 
    len1 = strlen(a) ;
    len2 = strlen(b) ;

    while ( i <= len1 -len2 ){
        if ( strncmp(a+i,b,len2) == 0){
            count++ ;
            i += len2 ;
        }
        else {
            i++ ;
        }
    }
    return count;
}
int main() {
    char a[80] , b[80] ;
    scanf("%s%s",a,b) ;
    int i = find(a,b) ;
    printf("%d",i) ;
    return 0 ; 
}
