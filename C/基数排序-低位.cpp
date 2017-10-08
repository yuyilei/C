#include<iostream>
#include<cstdio>
using namespace std ; 
struct node { 
    struct node *next ; 
    int data ; 
    node() : data(0), next(NULL) {}
} ; 
int num , bit = 4 ;  
struct node * InitNode(struct node * head , int & num ) ; 
void show_elem(struct node *head ) ; 
struct node * GetFirstNode(struct node  *head) ;
void AppendNode(struct node  *head,struct node  *tmp) ; 
void Total(struct node  *L, struct node  *tmp ) ; 
int GetNum(struct node  *p , int pos ) ; 
void radix_sort(struct node *head) ;   

struct node * InitNode(struct node * head , int & num ) {
    struct node *tmp = head ; 
    cin >> num ; 
    for ( int i = 0 ; i < num ; i++ ) {
        tmp->next = new node() ; 
        tmp = tmp->next ; 
        cin >> tmp->data ; 
    } 
    return head ; 
}

void show_elem(struct node *head ) {
    struct node *tmp = head->next ;
    cout << "Show elem:" << endl ; 
    while ( tmp ) {
        cout << tmp->data ; 
        tmp = tmp->next ; 
        if ( tmp )
            cout << " -> " ; 
    }
    cout << "\n\n" ; 
}

struct node * GetFirstNode(struct node  *head) {
    if ( head->next == NULL )  
        return NULL;
    struct node *p ;
    p = head->next ;
    head->next = p->next ;
    return p ;
}

void AppendNode(struct node  *head,struct node  *tmp) {
    if ( head == NULL ) 
        return ;
    struct node  *p ;
    p = head ;
    while ( p->next != NULL ) 
        p = p->next ;
    p->next = tmp ;
    tmp->next = NULL ;
}

void Total(struct node  *L, struct node  *tmp ) {
	struct node  *p = L ;
	while ( p->next != NULL ) 
		p = p->next ;
	p->next = tmp->next ;
}

int GetNum(struct node  *p , int pos ) {
    int data = p->data , res , i = 0 ;
    while ( i < pos ) {
        res = data % 10 ; 
        data /= 10 ; 
        i++ ; 
    }
    return res ; 
} 

void radix_sort(struct node *head) {
	struct node  *p[10] , *q ;
	int i , j , k ;
    for( j = 1 ; j <= bit ; j++ ){
	    for( i = 0 ; i < 10 ; i++ )
		    p[i] = new node() ; 
	    while( head->next!= NULL ) {
            q = GetFirstNode(head) ;
            k = GetNum(q,j) ; 
            AppendNode(p[k],q) ; 
        }
        for( i = 0 ; i < 10 ; i++) 
            Total(head,p[i]) ;
	}
	for( i = 0 ; i < 10 ; i++ ) 
		delete(p[i]);
}

int main() {
    struct node *head = new node() ; 
    head = InitNode(head,num) ;
    cout << "\nBefore radix sort    "  ; 
    show_elem(head) ; 
    radix_sort(head) ; 
    cout << "\nAfter radix sort     "  ; 
    show_elem(head) ; 
    return 0 ; 
} 