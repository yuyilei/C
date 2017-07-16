#include<stdio.h>
/*神奇啊 , 直接这样居然可以改变数组的值!!,数组就是指针吗?? */
void hah( int a[], int n ) {

    int i ; 

    for ( i = 0 ; i < n ; i++) 
        a[i] = i ;

    for ( i = 0 ; i < n ; i++)
        printf("%d ",a[i]) ;

    
}

int main () {

    int a[10] ; 
    
    int i ; 

    for ( i = 0 ; i < 10 ; i++) 
        scanf("%d",&a[i]) ;

    hah(a,10) ;

    return 0 ; 
}
