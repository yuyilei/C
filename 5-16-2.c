#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int number ; 
    int score  ; 
} node  ; 
int getres(node p[100] , int num ){
    int i , j , res = 0  , min  = 0 ; 
    min = p[0].score ; 
    for ( i = 1 ; i < num ; i++ ){
        if (p[i].score < min ){
            min = p[i].score ; 
            res = i ; 
        } 
    }
    return res ; 
}
int main() {
    int i , n , temp , res ; 
    node p[100] , tmp ; 
    scanf("%d",&n) ; 
    for ( i = 0 ; i < n ; i++ ){
        scanf("%d%d",&p[i].number,&p[i].score) ; 
    }
    res = getres(p,n) ; 
    printf("%d %d\n",p[res].number,p[res].score) ; 
    return 0 ; 
}
