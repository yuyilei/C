#include<stdio.h>
#include<stdlib.h>
int main() {
    int n , i = 0 , j = 0 , k , tmp1 = 0 , tmp2 , a[4] = {0} ; 
    scanf("%d",&n) ; 
    if ( !(n >= 1000 && n <= 9999) ){
        exit(-1) ; 
    }
    tmp2 = n ; 
    while ( tmp2 > 0 ){
        tmp1 = tmp1*10 + tmp2 % 10 ; 
        a[i++] = tmp2 % 10 ; 
        tmp2 /= 10 ; 
    }
    printf("%d\n",tmp1) ; 
    for ( i = 0 ; i < 4 ; i++ ){ //  选择排序的i , j 的范围都是number  
        k = i ; 
        for ( j = i + 1 ; j < 4 ; j ++ ){
            if ( a[j] > a[k] ){
                k = j ; 
            }
        }
        if ( k != i ){
            tmp2 = a[k] ; 
            a[k] = a[i] ; 
            a[i] = tmp2 ; 
        }
    }
    for ( i = 0 , j = 1 , tmp1 = 0 , tmp2 = 0 ; i < 4 ; i ++ , j *= 10 ){
        tmp1 += (a[i])*j ;  
    }
    printf("%d\n",tmp1) ; 
    tmp2 = 0 ; 
    while ( tmp1 > 0 ){
        tmp2 = tmp2 * 10 + tmp1 % 10 ; 
        tmp1 /= 10 ; 
    }
    printf("%d\n",tmp2) ; 
    return 0 ; 
}
