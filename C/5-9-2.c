#include<stdio.h>
#include<stdlib.h>
struct q {
    int data ; 
    struct q *next ; 
} ;
typedef struct q node ; 
node *head ; 
node *create(int n ){
    node *p ; 
    p = ( node *)malloc(sizeof(node)) ; 
    if ( p== NULL ){
        printf("Not enough space\n") ; 
        exit(0) ;
    }
    p->next  = NULL ; 
    p->data = n+1 ;
    return p ; 
}
void dislink(node *head){
    node *p = head ; 
    for ( int j = 1  ; p != NULL ; p = p->next , j++ ){
        printf("%5d%10d\n",j,p->data) ; 
    }
}
node *delnode( node *p , node *pr ){
    if ( p == head ){
        head = p->next ; 
        free(p) ; 
        return head ; 
    }
    if ( p->next == NULL ){
        pr->next = NULL ;
        free(p) ; 
        return head ; 
    }
    else {
        pr->next = p->next ; 
        free(p) ; 
        return pr->next ; 
    }
}
int main(){
   int i = 0 , all = 25 ; 
   node  *p , *pr ; 
   head = NULL ;
   for ( i = 0 ; i < 25 ; i++ ){
       if ( i == 0 ){
            head  = create(i) ;
            pr  = head ; 
       }
       else {
            pr->next = create(i) ; 
            pr = pr->next ;
       }
   }
   dislink(head) ; 
   for ( i = 1 , p = head ; ; i++ ){
        if ( i % 3 == 0 ){
            p = delnode(p,pr) ; 
            all--;
            if ( all < 3 ){
                break ;
            }
        }
        else {
            pr = p ; 
            p = p->next ; 
            if ( p == NULL ){
                p = head ; 
            }
        }
    }
   printf("The last man is : \n") ;
   dislink(head) ; 

}
