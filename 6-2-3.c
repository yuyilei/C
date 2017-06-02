#include<stdio.h>
int getres(int n ){
    if ( n == 1 || n == 0 ){
        return 1 ; 
    }
    return getres(n-1) + getres(n-2) ; 
}
int main() {
    int i ; 
    float sum = 0 ; 
    for ( i = 0  ; i < 20 ; i++ ) {
        printf("%d/%d \n",getres(i+2),getres(i+1)) ; 
        sum += (float)getres(i+2)/getres(i+1) ; 
    }
    printf("\nsum = %f\n",sum) ; 
    return 0 ; 
}
