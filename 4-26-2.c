#include<stdio.h>
#include<string.h>
#include<algorithm>
struct node{
    char word[20] ; 
    int num ; 
} ;
int cmp (struct node a , struct node b ){
    if ( a.num != b.num ){
        return a.num > b.num ;
    }
    return a.word > b.word ; 
}

int main () {
    int i , j , k = 0 , t =  0  , len , s = 0 , z = 0 , end = 0  ; 
    char in[200] ; 
    gets(in) ; 
    len = strlen(in) ; 
    struct node p[50] ;
    struct node q[50] ; 
    struct node temp ; 
    for (  i = 0 ; i < len ; i++) {
        in[i] = tolower(in[i]) ; 
    }
    for ( i = 0 ; i < len ; i++ ) {
        if ( in[i] >= 'a' && in[i] <= 'z') {
            temp.word[k++] = in[i] ; 
            temp.num = 1 ;
        }
        else if ( in[i+1] >= 'a' && in[i+1] <= 'z'){
            p[t++] = temp ;
            memset(temp.word,0,sizeof(temp.word)) ;
            temp.num = 0 ; 
            k = 0 ; 
        }
    }
    k = 0 ; 
    for ( i = len -1 ; ; i-- ){
        if (in[i] >= 'a' && in[i] <= 'z' ) {
            p[t].word[k++] = in[i] ; 
            p[t].num = 1 ;
        }
        if (in[i] == ' ' ) {
            break ;
        }
    }
    len = strlen(p[t].word) ; 
    k = len - 1 ; 
    s = 0 ; 
    while ( s <= k ){
        char c = p[t].word[k] ; 
        p[t].word[k] = p[t].word[s] ; 
        p[t].word[s] = c ; 
        s++ ; 
        k--; 
    }
    printf("%s\n",p[t].word) ; 
    k = t  ; 
    for ( i = k  ; i >= 0 ; i--) {
        int flag = 0 ; 
        for ( j = 0 ; j < i ; j++ ){
            if ( strcmp(p[i].word , p[j].word) == 0 ){
                if ( flag == 0 ){
                    p[j].num++ ; 
                    flag = 1 ;
                }
                else { 
                    p[j].num = 0 ; 
                }
            }
        }
        if ( flag == 0 ){
            q[z++] = p[i] ; 
        }
        else {
            p[i].num = 0 ; 
        }
    }
    for ( i = 0 ; i < k ; i++ ){
        if ( p[i].num != 0 )
        printf("%s:%d\n",p[i].word,p[i].num) ; 
    }
    printf("\n") ; 
    qsort()
    for  ( i= 0 ; i < z ; i++) {
        printf("%s:%d\n",q[i].word,q[i].num) ; 
    }
    return 0 ; 
}
