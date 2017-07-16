/* 归并排序*/

#include<stdio.h>
#include<stdlib.h>

void merge(int *arr , int left , int middle ,int right , int size) {

    int i = left , j = middle + 1 , k ; 
    int temp_arr[size] ; 
    for ( k = left ; k <= right ; k++) 
        temp_arr[k] = arr[k] ; //  复制数组 
    
    for( k = left ; k <= right ; k++) {
    
        if ( i > middle) 
            arr[k] = temp_arr[j++] ;
        else if ( j > right )
            arr[k] = temp_arr[i++] ;
        else if ( temp_arr[i] < temp_arr[j] ) 
            arr[k] = temp_arr[i++] ;
        else 
            arr[k] = temp_arr[j++] ;
    }
}

void merge_sort( int *arr , int size ) {

    int n ; // 每次递归的子序列长度 
    int i ; // 索引 
    int right ; // 子序列的右边界

    for ( n = 1 ; n < size ; n = 2*n) {
    
        for ( i = 0 ; i < size - n ; i += 2*n) {
        
            if ((i+2*n-1) < (size-1)) 
                right = i + 2*n -1 ;
            else 
                right = size -1 ; 
            merge(arr, i , i+n-1,right,size ) ;
        }
        for ( i = 0 ; i < size ; i++) 
            printf("%d ",arr[i]) ; 
        printf("\n") ;
    }
}



int main(){

    int i ; 
    int arr[40] ; 
    int size ; 

    scanf("%d" ,&size) ; 

    for ( i = 0 ; i < size ; i++) 
        scanf("%d",&arr[i]) ; 
   
    merge_sort(arr , size) ; 


    return 0 ; 
    
}


