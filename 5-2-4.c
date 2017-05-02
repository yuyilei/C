#include<stdio.h>
#include<stdlib.h>
struct info {
    int score ; 
    struct info *next ;
} ;
typedef struct info NODE ; 
NODE *create_linklist() ; 
void insert_linklist(NODE *head, NODE *pnew , int i ) ; 
void delete_linklist(NODE *head, int i) ;
void display_linklist(NODE *head ) ; 
void free_linklist(NODE *head ) ; 
int main() {
    NODE *head , *pnew ; 
    head = create_linklist() ;  
    if ( head == NULL ){
        return 0 ; 
    }
    printf("after create") ; 
    display_linklist(head) ; 
    pnew = (NODE *)malloc(sizeof(NODE)) ;
    if ( pnew == NULL) {
        printf("do not have enough memory") ;
        return 0 ; 
    }
    pnew->score = 88 ; 
    insert_linklist(head,pnew,3) ; 
    printf("after insert") ; 
    display_linklist(head) ;
    delete_linklist(head,3) ;
    printf("after delete") ;
    display_linklist(head) ; 
    free_linklist(head) ;
    return 0 ; 
}
NODE *create_linklist() {
    NODE *head , *tail , *pnew ; 
    int score ;
    head  = (NODE *)malloc(sizeof(NODE)) ; 
    if ( head == NULL ){
        printf("no enough memory\n") ; 
        return NULL ;
    }
    head->next = NULL ; 
    tail = head ; 
    printf("input the score of student\n") ; 
    while (1){
        scanf("%d",&score) ; 
        if ( score <0 ){
            break ; 
        }
        pnew = (NODE *)malloc(sizeof(NODE)) ; 
        if ( pnew ==NULL ){
            printf("no enough memory\n") ;
            return NULL ;
        }
        pnew->score = score ; 
        pnew->next = NULL ;
        tail->next = pnew ; 
        tail = pnew ; 
    }
    return  head ; 
}
void insert_linklist(NODE *head , NODE *pnew , int i ){
    NODE *p ; 
    int j ; 
    p = head ; 
    for ( j = 0 ; j < i && p != NULL ; j++) {
        p = p->next ; 
    }
    if ( p == NULL ){
        printf("Can not insert!\n") ;
        return ; 
    }
    pnew->next = p->next ; 
    p->next = pnew ; 
}
void delete_linklist(NODE *head , int i ) {
    NODE *p = head  , *q ; 
    int j ; 
    if ( i== 0 ){
        return ; 
    }
    for ( j = 0 ; j < i && p->next != NULL ; j++ ){
        p = p->next ; 
    }
    if ( p->next == NULL ){
        printf("Can not delete the node") ;
        return ; 
    }
    q = p->next ; 
    p->next = q->next ; 
    free(q) ;
}
void display_linklist(NODE *head){
    NODE *p ; 
    for ( p = head->next ; p != NULL ; p=p->next ){
        printf("%d ",p->score) ;
    }
    printf("\n") ;
}
void free_linklist(NODE *head){
    NODE *p , *q ; 
    p = head ; 
    while( p->next != NULL){
        q = p->next ; 
        p->next = q->next ;
        free(q) ;
    }
    free(head) ; 
}
