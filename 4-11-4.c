#include<stdio.h>
#include<string.h>
void add(char a[] , char b[]) {
    int num = 0 , n = 0 ;
    while ( a[num] != '\0') {
        num++ ;
    }
    while ( b[n] != '\0' ){
        a[num] = b[n] ;
        num ++ ;
        n ++ ;
    }
}
int main () {
    char str1[100] , str2[100] ;
    gets(str1) ;
    gets(str2) ;
    add(str1,str2) ; 
    printf("str1 + str2 = %s",str1) ;
    return 0 ; 
}
