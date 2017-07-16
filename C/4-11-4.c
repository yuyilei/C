#include<stdio.h>
#include<string.h>
void add(char a[] , char b[]) {
    int num = 0 , n = 0 ;
    num = strlen(a) ; 
    while ( b[n] != '\0' ){
        a[num++] = b[n++] ;
    }
}
int main () {
    char str1[100] , str2[100] ;
    memset(str1,0,100) ; 
    memset(str2,0,100) ; 
    gets(str1) ;
    gets(str2) ;
    add(str1,str2) ; 
    printf("str1 + str2 = %s",str1) ;
    return 0 ; 
}
