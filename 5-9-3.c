#include<stdio.h>
#include<stdlib.h>
struct q {
    int score ; 
    struct q *next ; 
} ; 
typedef struct q node ; 
int main() {
    int k , a ;
    node *head , *p , *q ; 
    head = (node *)malloc(sizeof(node)) ; 
    if ( head == NULL ){
        printf("Not enough space\n") ; 
        exit(0) ;
    }
    head->next = NULL ;
    for ( k = 0 ; k < 10 ; k++ ){
        p = ( node *)malloc(sizeof(node)) ; 
        if ( p == NULL ){
            printf("Not enough space\n") ;
            exit(0) ;
        }
        printf("input the %dth stu\'s score\n",k+1) ; 
        scanf("%d",&(p->score)) ; 
        for  ( q = head ; q->next != NULL ; q = q->next){
            if ( q->next->score < p->score ){
                break ;
            }
        }
        p->next = q->next ; 
        q->next = p ; 
    }
    printf("after sorted\n") ; 
    for ( p = head->next ;  p != NULL ; p = p->next ){
        printf("%d ",p->score) ; 
    }
    printf("\n") ; 
    for ( p = head ; p->next != NULL ; p = p->next ){
        q = p->next ; 
        p->next = q->next ;
        free(q) ;
    }
    free(head) ; 
    return 0 ;
}
