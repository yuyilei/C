/*计算某矩阵中各行元素之和最大值*/
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int GetSumRow(int *p , int num) ;
int GetMaxRow(int **p , int row , int col) ; 

int main(){

    int row , col ; 
    int i , j , **p , maxrow ; 

    printf("input row =") ;
    scanf("%d",&row) ;
    printf("input col =") ;
    scanf("%d",&col) ;

    p = (int **) malloc(row * sizeof(int *)) ;
    for ( i = 0 ; i < row ; i++)
        p[i] = (int *) malloc(col * sizeof(int )) ; 

    printf("input the number:\n") ;
    for ( i = 0 ;  i < row ; i++) 
        for  ( j = 0 ; j < col ; j++) 
            scanf("%d",p[i]+j) ;

    maxrow = GetMaxRow( p , row , col) ;
    printf("maxrow=%d\n",maxrow) ;

    for (i = 0 ; i < row ; i++) {
        free(p[i]) ; 
    free(p) ;
    }

    return 0 ;

}

int GetMaxRow(int **p , int row , int col) {

    int i , max , t ;

    max = GetSumRow(p[0], col) ;
    
    for (i = 1 ; i < row ; i++) {
    
        t = GetSumRow(p[i] , col) ;
        if (t > max) 
            max = t ; 
        
    }

    return max ;
}

int GetSumRow(int *p , int num ) {

    int i , sum = 0 ;

    for ( i = 0 ; i < num ; i++) 
        sum += p[i] ;

    return sum ;
}
