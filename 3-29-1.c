#include<stdio.h>
int main() {

    int n , m , i , j , k ; 
    
    for ( n = 2 ; n <= 1000 ; n++){
    
        m = 0 ;
        j = 0 ;
        for ( i = 2 ; i < n ; i++){
  //          printf(" n : %d : ",n)  ;
            if ( n % i == 0){
            
                m += i ;
//                printf(" i : %d ",i) ;
            }
        }
    
    //    printf("\n") ;
      //  printf("m: %d\n",m) ;
        for ( k = 2 ; k < m ; k++){
        
      //      printf(" m : %d ",m) ;
            if ( m % k == 0 ){
            
                j += k ;
        //      printf("k : %d",k) ;
            }
        }

       // printf("\n") ;
       // printf("j: %d\n",j) ; 
        if ( j == n && n != m ){
        
            printf("%d %d",n,m) ;
        }
    }
    return 0 ; 
}
