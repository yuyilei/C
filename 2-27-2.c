/* 归并排序*/

// 死了死了 , 是错的 !!!!
#include<stdio.h>
#include<stdlib.h>

void merge(int *arr , int left , int middle , int right , int size ){

    int i = left , j = middle + 1 , k ; 
    int temp_arr[size] ;
    for ( k = left ; k <= right ; k++)
        temp_arr[k] = arr[k] ;

    for ( k = left ; k <= right ; k++) {
    
        if ( i > middle) 
            arr[k] = temp_arr[j++] ;
        else if ( j > right )
            arr[k] = temp_arr[i++] ;
        else if ( temp_arr[i] > temp_arr[j] )
            arr[k] = temp_arr[i++] ;
        else 
            arr[k] = temp_arr[j++] ;
    }
}

void  merge_sort(int *arr , int left , int right , int size ) {

    if ( left < right ) {
    
        int middle = left + ( right - left) / 2 ;
        merge_sort(arr , left, middle+1 , right , size) ;
        merge_sort(arr , middle+1,right,size) ;
        merge(arr,left,middle,right,size) ;
/*        for ( int i = 0 ; i < size ; i++) 
            printf("%d ",arr[i]) ; 
  */      printf("\n") ; 
    }
}

int main() {

    int i ; 
    int arr[20] ; 
    int size  ;

    scanf("%d",&size) ;

    for ( i = 0 ; i < size ;i++) 
        scanf("%d",&arr[i]) ;

    merge_sort(arr,0,size-1 ,size) ;

    for ( i = 0 ; i < size ; i++)

        printf("%d ",arr[i]) ; 
    return 0 ; 
}
