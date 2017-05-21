#include<stdio.h>
int getres(int m , int n ){
    if ( m == n || n == 0 ){
        return 1 ; 
    }
    else {
        return (m*getres(m-1,n)/(m-n)) ; 
    }
}
int main() {
    int n , m , res ; 
    scanf("%d%d",&m,&n) ; 
    res = getres(m , n) ; 
    printf("%d\n",res) ;
    return 0 ;
}
