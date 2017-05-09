#include<stdio.h>
int main() {
    int ji[10] , ou[10] ,  temp , i , j , m = 0 , n = 0 ; 
    for ( i = 0 ; i < 10 ; i++ ){
        scanf("%d",&temp) ;
        if ( temp % 2 == 0 ){
            ou[m++] = temp ; 
        }
        else {
            ji[n++] = temp ; 
        }
    }
    for ( i = 0 ; i < m - 1  ; i ++ ){
        for ( j = 0  ; j < m - 1 - i; j ++ ){
            if ( ou[j] > ou[j+1] ){
                int t = ou[j] ; 
                ou[j] = ou[j+1] ; 
                ou[j+1] = t ; 
            }
        }
    }
    for ( i = 0 ; i < n - 1   ; i ++ ){
        for ( j = 0  ; j < n - 1 - i  ; j ++ ){
            if ( ji[j] > ji[j+1]) {
                int t = ji[j] ; 
                ji[j] = ji[j+1] ; 
                ji[j+1] = t ; 
            }
        }
    }
    for ( i = 0 ; i < n ; i++ ){
        printf("%d ",ji[i]) ; 
    }
    for ( i = 0 ; i < m ; i++ ){
        printf("%d ",ou[i]) ; 
    }
    printf("\n") ; 
    return 0 ; 
}
