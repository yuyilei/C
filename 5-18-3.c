#include<stdio.h>
#include<string.h>
int main() {
    char a[40] , tmp1[40] , tmp2[40] , temp , i = 0 , j = 0 , k = 0 , len , flag[40] = {0} ; 
    gets(a) ; 
    len = strlen(a) ; 
    for ( i = 0 ; i < len ; i++ ){
        if ( (a[i] - 'a' ) % 2 == 1 ){
            tmp1[j++] = a[i] ; 
            flag[i] = 1 ;
        }
        else {
            tmp2[k++] = a[i] ; 
        }
    }
    len = j ; 
    for ( i = 0 ; i < len - 1; i++ ){
        for ( j = i + 1 ; j < len - 1 ; j++ ){
            if ( tmp1[j] > tmp1[j+1] ){
                temp = tmp1[j] ; 
                tmp1[j] = tmp1[j+1] ; 
                tmp1[j+1] = temp ; 
            }
        }
    }
    len =strlen(a) ; 
    printf("\n") ; 
    for ( i = 0 , k = 0 , j = 0 ; i < len ; i++ ){
        if ( flag[i] == 1 ){
            printf("%c ",tmp1[k++]) ; 
        }
        else {
            printf("%c ",tmp2[j++]) ; 
        }
    }
    return 0 ; 
}
