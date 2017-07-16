#include<stdio.h>
#include<stdlib.h>
#define max 100 
struct q {
    int rank ; 
    char no[11] ;
    char name[21] ; 
    int score ; 
    int time  ; 
} ; 
typedef struct q node ; 
int main() {
    node st[100] , temp , *pst ; 
    FILE *fp ; 
    pst = ( node *)malloc( 7*sizeof(node)) ; 
    int i , j , k , n , s  ,t ; 
    if ( (  fp = fopen("score.dat" ,"rb")) == NULL ){
        printf("can not open it !\n") ; 
        exit(0) ; 
    }
    n = 7 ; 
    for ( i = 0 ; i < n ; i++ ) {
        fscanf(fp,"%d %s %s %d %d",&pst[i].rank,pst[i].no,pst[i].name,&pst[i].score,&pst[i].time) ;
    }
    
    for ( i = 0 ; i < 7 ; i++ ){
        printf("%d %s %s %d %d\n",pst[i].rank,pst[i].no,pst[i].name,pst[i].score,pst[i].time) ;  
    }
    for ( i = 0 ; i < n - 1 ; i ++ ){
        k = i ; 
        for ( j = i + 1   ; j < n  ; j++ ){
            if ( (st[j].score > st[k].score) || (( st[j].score == st[k].score) && st[j].time < st[k].time)){ 
                k = j ; 
            }
        }
        if ( k != i ){
            temp = st[i] ; 
            st[i] = st[k] ; 
            st[k] = temp ; 
        }
    }
    j = 0 ; 
    s = 0 ; 
    t = 0 ; 
    for ( i = 0 ; i < n ; i++ ){
        if (st[i].score != s || st[i].time != t ){
            j++ ; 
            st[i].rank = j ; 
            s = st[i].score ;
            t = st[i].time ; 
        }
        st[i].rank = j ; 
    }
    for ( i = 0 ; i < n ; i++ ){
     //   printf("%4d %-10s %-20s %3d %3d\n",st[i].rank,st[i].no,st[i].name,st[i].score,st[i].time) ; 
    }
    fclose(fp) ; 
}
