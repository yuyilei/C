#include<stdio.h>
#include<string.h>
int main() {
    int ch , i , j , len1 , len2 , start ;
    char a[80] , b[80] , c[80] ;
    printf("取子串操作---------1\n插入操作-----------2\n删除操作-----------3\n") ;
    scanf("%d",&ch) ;
    while ( ch < 0 && ch > 4  ){
        printf("输入1,2或3！\n") ;
        scanf("%d",&ch) ; 
    }
    if ( ch == 1 ){
        printf("输入字符串， 起始位置， 子串长度 \n") ; 
        scanf("%s",a) ; 
        len1 = strlen(a) ; 
        scanf("%d%d",&start,&len2) ; 
        while ( len1 < len2 + start -1 ) {
            printf("子串不存在！！\n") ; 
            scanf("%d%d",&start,&len2) ; 
        }
        start-- ; 
        for ( i = 0 ; i < len2 ; i ++ ){
            printf("%c", a[start+i] ); 
        }
        printf("\n") ; 
        return 0 ; 
    }   

    if ( ch == 2 ){
        printf("输入原字符串，目标字符串，指定位置\n") ; 
        scanf("%s%s%d",a,b,&start) ; 
        len1  = strlen(a) ;
        len2 = strlen(b) ; 
        while ( len1 < start){
            printf("无法输入!!!\n") ;
            scanf("%d",&start) ; 
        }
        for ( i = 0 ; i < len1 + len2 ; i++ ){
            if ( i < start ) {
                 printf("%c", a[i]) ; 
            }
            else if ( i >= start && i < len2 + start ) {
                 printf("%c",b[i-start]) ; 
            }
            else {
                 printf("%c",a[i-start]) ;
            }
        }
        printf("\n") ; 
        return 0 ; 
    } 
    if ( ch == 3 ) {
        printf("输入字符串，起始位置，删除长度\n") ; 
        scanf("%s%d%d",a,&start,&len1) ;
        len2 = strlen(a) ;
        while ( len2 < start + len1 ){
            printf("无法删除子串!!\n") ;
            scanf("%d",&start) ;
        }
        start-- ; 
        int k = 0 ;
        for ( i = 0 ; i < len2 ; i++ ){
            if ( i < start || i>= start + len1) {
                printf("%c",a[i]) ;
            }
        }
        printf("\n") ; 
        return 0 ; 
    }
}
