#include<stdio.h>
#define MAX 15 

int main () {

    int m , mm , i , j , k , ni , nj ;
    int magic[MAX][MAX] = {0} ;

    printf("Enter the number you wanted: \n") ;
    scanf("%d",&m) ;

    mm = m*m ;

    i = 0 ; 
    j = m / 2 ;

    for ( k = 1 ; k <= mm ; k++ ){
    
        magic[i][j] = k ;
        
        if ( i ==0 ){
        
            ni = m - 1 ;
        }
        else {
        
            ni = i - 1 ;
        } 
        if ( j == m -1 ){
        
            nj = 0 ;
        }
        else {
        
            nj = j+ 1 ;
        }

        if ( magic[ni][nj] == 0 ){
        
            i = ni ;
            j = nj ;
        }
        else 
            i++ ;
    }

    for ( i = 0 ; i < m ; i++ ){
    
        for ( j = 0 ; j < m ; j++){
        
            printf("%4d",magic[i][j]) ;
        }
        printf("\n") ;
    }

    return 0 ; 
}
