#include<stdio.h> // 不知道他是干嘛的,所以来写来跑跑23333 

typedef unsigned char *byte_pointer ; // 每个都是16进制表示的字节..

void show_bytes( byte_pointer start , size_t len ) {

    size_t i ; 
    for ( i = 0 ; i < len ; i ++ )
        printf(" %.2x",start[i]) ;
    printf("\n") ;

}

void show_int(int x) {

    show_bytes((byte_pointer) &x , sizeof(int)) ;
}

void show_float( float x){

    show_bytes((byte_pointer) &x , sizeof(float)) ; 
}

void show_pointer( void *x){

    show_bytes((byte_pointer) &x , sizeof(void *)) ; // 害怕 ,居然还能这样!!!
}

int main() {

    int x ;
    float y ;
    float *z ;

    scanf("%d%f",&x,&y) ;
    z = &y ;

    show_int(x) ;
    show_float(y) ;
    show_pointer(z) ;

    return 0 ;
    // 原来是打印出16进制表示的字节 233333!!!
}
