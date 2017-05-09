#include<stdio.h>
#include<string.h>
int main() {
     short i , j , a[i] , max = 0 , min = 0  ; 
     unsigned short int b[4] , maxn, minn , temp  ; 
     for ( i = 0 ; i < 4 ; i++ ){
        scanf("%hd",&a[i]) ; 
        b[i] = (unsigned short int)a[i] ; 
     }
    maxn = b[0] ; 
    minn = b[0] ; 
    for ( i = 0 ; i < 3 ; i++ ){
        for ( j = 0 ; j + i < 3 ; j++ ){
            if ( maxn < b[i] ){
                maxn = b[i] ; 
                max = i ; 
            }
            if ( min > b[i] ){
                minn = b[i] ;
                min = i ; 
            }
        }
    }
    printf("最大无符号数:%u  对应的输入值: %hd\n",a[max],b[max]) ; 
    printf("最小无符号数:%u  对应的输入值: %hd\n",a[min],b[min]) ; 
    printf("两数之差：%u\n",a[max]-a[min]) ; 
    return 0 ; 
}

