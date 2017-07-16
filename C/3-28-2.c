#include<stdio.h>

void find(int p[] , int n , int s , int m) ;
int main() {

    int n = 10 ; 
    int p[30] ;
    
    find(p,30,1,n) ;
    for (int i = 29 ; i >=0 ; i--){
    
        printf(" %4d",p[i]) ;
        if ( i % 10 == 0){
        
            printf("\n") ;
        }
    }

    return 0 ; 
}

void find (int p[] , int n , int s , int m) { 

    int i , j , w ;

    for ( i = 1 ; i <= n ; i++)
        p[i-1] = i ;
    for ( i = n ; i >= 2 ; i--) {
    
        s = ( s + m - 1 ) % i ;
        if ( s == 0 ){
        
            s = i ;
        }
        w = p[s-1] ;
        for ( j = s ; j < i ; j++ ){
        
            p[j-1] = p[j] ;
        }
        p[i-1] = w ; 
    }
}
