#include<stdio.h>
#include<string.h>
void multi(char a[] , char b[], int c[] ) ; 
void subtraction(char a[] , char b[] , int c[] ) ;
int main() {
    int choice ;
    printf("1:超大整数乘法\n2:超大整数减法\n") ;
    scanf("%d",&choice) ;
    printf("\n") ;
    char a[100] , b[100] ; 
    int c[202] ;
    scanf("%s%s",a,b) ; 
    memset(c,0,202*sizeof(int)) ;
    if ( choice == 1 ){
        multi(a,b,c) ;
    }
    if ( choice == 2 ){
        subtraction(a,b,c) ;
    }
}
void multi(char a[] , char b[] , int c[] ){
    int lena = strlen(a) ;
    int lenb = strlen(b) ;
    for ( int i = 0  ; i < lena ; i++ ) {
       for ( int j = 0  ; j < lenb ; j++) {
           c[i+j+1] += (a[i]-'0')*(b[j]-'0') ;
       } 
    }
    for ( int i = lena+lenb+2 ; i >= 0 ; i-- ) {
        if (c[i]>=10) {
            c[i-1] += c[i]/10 ;
            c[i] %= 10 ;
        }
    }
    int flag = 0 ;
    printf("%s * %s = " ,a ,b) ;
    for ( int i = 0 ; i < lena+lenb ; i++){
        if  (c[i] != 0 ){
            flag = 1 ;
        }
        if ( flag ){
            printf("%d",c[i]) ; 
        }
    }
}

void subtraction( char a[] , char b[] , int s[] ){
    int lena = strlen(a) ;
    int lenb = strlen(b) ;
    int k = lena - 1 , j = lenb - 1  ;
    int i = 0 ;
    while ( k >= 0 && j >= 0 ) {
        s[i++] = a[k--] - b[j--] ;
    }
    while ( k >= 0 ){
        s[i++] = a[k--] - '0' ;
    }
    while  ( j >= 0 ){
        s[i++] = '0' - b[j--] ;
    }
    int lens = i ; 
    for ( int i = 0 ; i < lens -1 ; i++ ){
        if ( s[i] < 0 ){
            s[i] += 10 ;
            s[i+1] -= 1 ; 
        }
    }
    printf("%s - %s = ",a,b) ;
    for ( int i = lens -1  ; i >=0 ; i --){
        printf("%d",s[i]) ;
    }

}
