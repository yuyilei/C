#include<stdio.h>
int getcommon1(int a , int b ){
    if ( a < b ){
        a = a + b ; 
        b = a - b ; 
        a = a - b ; 
    }
    while ( b != 0 ) {
        int  c = a ; 
        a = b ; 
        b = c % b ; 
    }
   return a ; 
}
int getcommon2(int a , int b ){
    while ( a != b ){
        if ( a > b ){
            a = a - b ; 
        }
        else {
            b = b - a ;
        }
    }
    return a ; 
} 
int getcommon3( int a , int b ){
    int min = ( a < b ) ? a : b , i ; 
    for ( i = min ; i >= 1 ; i-- ){
        if ( a % i == 0 && b % i == 0 ) {
            break ; 
        }
    }
    return i ; 
}
int main() {
    int n ,m , res1 , res2 , res3 ; 
    scanf("%d%d",&n,&m) ; 
    res1 = getcommon1(n,m) ; 
    res2 = getcommon2(n,m) ; 
    res3 = getcommon3(n,m) ; 
    printf("%d %d %d",res1,res2,res3) ; 
    return 0 ; 
}
