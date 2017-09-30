#include<iostream>
#include<cstdio>
using namespace std ; 
struct node { 
    struct node *next ; 
    int data ; 
    node() : data(0), next(NULL) {}
} ; 
int num , bit = 4 ;  
struct node *result = new node() ; 

struct node * InitNode(struct node * head , int & num ) {
    int n , id , age , i , t1 , t2 ; 
    struct node *tmp = head ; 
    cin >> n ; 
    num = n ; 
    for ( i = 0 ; i < n ; i++ ) {
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
    if ( tmp == NULL ) {
        p->next = NULL ; 
        return ; 
    }
    p->next = tmp ;
    tmp->next = NULL ;
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

void radix_sort(struct node *head ,int pos ) {
    struct node *p[10] , *q ; 
    int i , j ,k ; 
    for ( i = 0 ; i < 10 ; i++ ) 
        p[i] = new node() ; 
    for ( i = pos ; i >= 1 ; i-- ) {
        while ( head->next != NULL ) {
            q = GetFirstNode(head) ; 
            if ( i == 1 ) {
                AppendNode(result,q) ; 
                return ; 
            }
            k = GetNum(q,i) ; 
            AppendNode(p[k],q) ; 
        } 
        for  ( j = 0 ; j < 10 ; j++ ) 
            radix_sort(p[j],pos-1) ; 
    }
    for ( i = 0 ; i < 10 ; i++ ) 
        delete(p[i]) ; 
    return ; 
}

int main() {
    struct node *head = new node() ;  
    head = InitNode(head,num) ;
    cout << endl ; 
    cout << "Before radix sort    "  ; 
    show_elem(head) ; 
    radix_sort(head,4) ; 
    cout << "\nAfter radix sort     "  ; 
    show_elem(result) ; 
    return 0 ; 
} 