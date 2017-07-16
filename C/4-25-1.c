#include<stdio.h>
#include<string.h>
int main() {
    char a[10] ;
    int i = 0 , len , j ; 
    gets(a) ; 
    len = strlen(a) ;
    j = len - 1 ; 
    while ( i < j ){
        if ( a[i] != a[j] ){
            printf("No\n") ; 
            return 0 ; 
        }
        i++ ; 
        j-- ; 
    }
    printf("Yes\n") ; 
    return 0 ; 
}
