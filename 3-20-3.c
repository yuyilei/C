#include<stdio.h>
// 改进后的冒泡排序 和 选择排序

int main() {

    int n , m ; 
    int a[1000] ;
    int b[1000] ;

    scanf("%d",&n) ;

    int i = 0 ;

    for ( i = 0 ; i < n ; i++)
        scanf("%d",&a[i]) ;

    int flag = 0 ;
    int j ;

    // 冒泡排序 
    for ( i = 1 ; i < n ; i++) {
    
        flag = 0 ;
        for ( j = 0 ; j < n - i ; j++) {
        
            int temp ; 
            if (a[j] > a[j+1]) {
            
                temp = a[j] ;
                a[j] = a[j+1] ;
                a[j+1] = temp ;
                flag = 1 ;
            }
        }
            if ( flag == 0 ) // flag 等于0 说明没有发生 交换 
                break ;
    }
    printf(" 冒泡排序: the sorted numbers : \n") ;
    for ( i = 0 ; i < n ; i ++){
    
        printf("%d ",a[i]) ;
    }

    // 选择排序 
    printf("\n") ;

    scanf("%d",&m) ;

    for ( i = 0 ; i < m ; i++ ) 
        scanf("%d",&b[i]) ;
    int k ; 

    for ( i = 0 ; i < m - 1 ; i++){
    
        k = i ;
        for ( j = i+1 ; j < m ; j++) {
        
            if (b[k]>b[j]){
            
                k = j ;
            }
        }
        if ( k != i ){
        
            int temp = b[i] ;
            b[i] = b[k] ;
            b[k] = temp ;
        }
    }

    printf("选择排序 : the sorted numbers : \n") ;
    for ( i = 0 ; i < m ; i++)
        printf("%d ",b[i]) ;

    return 0 ;
}
