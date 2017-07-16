#include<stdio.h>
void swap( int a[] , int x , int y ){
    int temp = a[x]; 
    a[x] = a[y] ; 
    a[y] = temp ; 
}
void perm( int a[] , int begin , int end , int number ){
    int i , j ; 
    if ( begin >= end ) {
        for ( i = 0 ; i < number ; i++ ){
            printf("%d ",a[i]) ; 
        }
        printf("\n") ; 
    }
    else {
        for ( j = begin ; j < end ; j ++ ){
            swap(a,begin,j) ; 
            perm(a,begin+1, end, number) ; 
            swap(a,begin,j) ; 
        }
    }
}
int main() {
    int a[3] = { 7 , 8 , 9 } ; 
    perm(a,0,3,3) ; 
    return 0 ; 
}
