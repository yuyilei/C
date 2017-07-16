#include<stdio.h>
struct node {
    int number , score  ; 
} ; 
void output(struct node *s , int  n ){
    int min = s[0].score , i  , flag = 0 ; 
    for ( i  = 1 ; i < n ; i++ ){
        if ( s[i].score < min ){
            min = s[i].score ;
            flag = i ; 
        }
    }
    printf("min_score : %d    number : %d\n",min,s[flag].number) ; 
}
int main() {
    int n , i  ; 
    struct node in[100] , *s ; 
    s = &in[0] ; 
    scanf("%d",&n) ; 
    for (  i = 0 ; i < n ; i++ ){
        scanf("%d%d",&in[i].number,&in[i].score) ; 
    }
    output(s,n) ;
    return 0 ; 
}
