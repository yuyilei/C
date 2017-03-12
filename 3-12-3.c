 // 判断大端法和小端法 
#include<stdio.h> // 用0x01234567 来测试

int is_little_endian1() {

    int flag = 1 ; // 默认是小端法 
    unsigned int x = 0x1234567 ;
    unsigned int temp = *((unsigned char *)&x) ; // 取出前2位 

    if ( temp == 0x01 ) 
        flag = 0 ;
    
    return flag ; 
}

int is_little_endian2(){ // 方法2 联合体union的存放顺序是所有成员都从低地址开始存放。
    union w
    {
    
        int a ;
        char b ;
    }c ;

    c.a = 1 ;
    
    return (c.b==1) ;
}

int main() {

    printf("%d\n",is_little_endian1()) ;
    printf("%d\n",is_little_endian2()) ;
    
    return 0 ;
}
