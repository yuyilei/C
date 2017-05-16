#include<stdio.h>
int main() {
    int k , sum = 0 ;
    char real = ' ' ; 
    for ( k = 0 ; k <= 3 ; k++ ){
        real = 'A' + k ; 
        sum = (real != 'A') + (real == 'C') + ( real == 'D') + (real != 'D') ; 
        if ( sum == 3 ){
            printf("The real man is %c\n",real) ; 
            return 0 ; 
        }
    }
    printf("Can not found the man!\n") ; 
    return 0 ;
}
