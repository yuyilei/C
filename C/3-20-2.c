#include<stdio.h>
#include<string.h>
// 求两个整数之间所有整数中出现的0到9的次数
int main() {

    long k , min , max , count[10] = {0} ;
    char str[9] ;
    int i ;

    printf("input the first number : \n") ;
    scanf("%ld",&min) ;
    printf("input the last number : \n") ;
    scanf("%ld",&max) ;

    for ( k = min ; k <= max ; k++) {
    
        sprintf(str,"%8ld",k) ; // 将改数转为字符串存在str中 
        for ( i = 7 ; i >= 0 && str[i] != ' ' ; i-- ){
        
            count[str[i]-'0']++ ;
        }
    }

    for ( i = 0 ; i < 10 ; i++){
    
        printf("%d--(%ld) ",i,count[i]) ;
        if ( i == 4 ){
        
            printf("\n") ;
        }
    }
        printf("\n") ; 
    return 0 ; 
}
