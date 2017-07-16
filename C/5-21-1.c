#include<stdio.h>
void try(int like[5][5] , int book[] , int take[] , int index ){
    int i , j ; 
    if ( index == 5 ){
        printf("\n") ; 
        for ( i = 0 ; i < 5 ; i ++ ){
            printf("%c :%d  \n",'A'+i,take[i]) ; 
        }
        printf("-------------") ;  
    }
    else { 
        for (  i = 0 ; i < 5 ; i ++ ){
            if ( like[index][i] == 1 && book[i] == 0 ){
                take[index] = i + 1 ;
                book[i] = 1 ;
                try(like,book,take,index+1) ; 
                take[index] = 0 ; 
                book[i] = 0 ;
            }
        }
    }
}
int main() {
    int like[5][5] = {{0,0,1,1,0},{1,1,0,0,1},{0,1,1,0,1},{0,0,0,1,0},{0,1,0,0,1}} ; 
    int book[5] = {0} , take[5] = {0} ; 
    try(like,book,take,0) ;    
    return 0 ; 
}
