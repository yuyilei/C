#include<stdio.h>
#include<string.h>
int main(){
    char a[40] , b[20] ; 
    int i , k , j ,  out = 0 , flag = 0  ; 
    gets(a) ; 
    gets(b) ; 
    int l = strlen(a) , h = strlen(b) ; 
    for ( i = 0 ; i < l - h ; i++ ){
        flag = 0 ; 
        for ( j = 0 ; j < h ; j++ ){
            if ( a[i+j] != b[j] ){
                flag = 1 ; 
                break ; 
            }
        }
        if ( flag == 0 ){
            out++ ; 
        }
    }
    printf("%d\n",out) ; 
    return 0 ;
} 
