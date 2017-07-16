#include<stdio.h>
#define D 1000000
int main() {
    int i , j , y , x ; 
    double res = 0 ; 
    scanf("%d",&x) ; 
    y = 1 ; 
    while ( y <= D ){
        res += (1/(double)y) ; 
        y *= x ; 
    }
    printf("%.10lf",res) ; 
}
