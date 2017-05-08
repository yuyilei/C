#include<stdio.h>
#include<string.h>
#include<sys/malloc.h>
#include<stdlib.h>
typedef struct {
    char dm[5] ,mc[11] ; 
    int dj , sl ; 
    long je ; 
} node ; 
node *input(int n ){
    node *p ; 
    int i ; 
    p = ( node * )malloc ( n * sizeof(node) ) ; // 注意先分内存！！
    if ( p == NULL ){
        printf("not enough space!") ; 
        return NULL ; 
    }
    printf("input the dm , mc , dj , sl\n") ; 
    for ( i = 0 ; i < n ; i++ ){
        scanf("%s%s%d%d",p[i].dm,p[i].mc,&p[i].dj,&p[i].sl) ; 
        p[i].je  = p[i].sl * p[i].dj ; 
    }
    return p ; 
}
void sort( node *p , int n ){
    int i , j ; 
    for ( i = 0  ; i < n - 1 ; i++ ){
        for ( j = i + 1  ; j  < n - 1  ; j++ ){
            if ( (strcmp(p[j].dm,p[j+1].dm)<0) || ((strcmp(p[j].dm,p[j+1].dm)==0) &&( p[j].je>p[j+1].je))){
                node temp = p[j] ;
                p[j] = p[j+1] ; 
                p[j+1] = temp ; 
            }
        }
    }
}
void output( node *p , int n ){
    int i ; 
    printf("after sort\n") ; 
    for ( i = 0 ; i < n ; i++ ){
        printf("%4s %10s %4d %5d %10ld\n",p[i].dm,p[i].mc,p[i].dj,p[i].sl,p[i].je) ; 
    }
}
int main() {
    int n , i ;
    node *p ;
    printf("input the number of the product\n") ; 
    scanf("%d",&n) ; 
    p = input(n) ; 
    if ( p == NULL ){
        exit(0) ; 
    }
    sort(p,n) ; 
    output(p,n) ; 
    free(p)  ;   // 注意释放内存！！
    return 0 ; 
}

