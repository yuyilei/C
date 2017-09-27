#include<cstdio>
#include<iostream>
using namespace std ;
int len_a , len_b , all ; 
struct St {
    int id , age ;
    char name[10] ; 
    struct St * next ; 
    St(int x , int y) : id(x), age(y) , next(NULL) {} 
} ; 
struct St * InitSt(struct St * head , int & num ) {
    int n , id , age , i ; 
    struct St *tmp = head ; 
    char name[10] ; 
    cin >> n ; 
    num = n ; 
    for ( i = 0 ; i < n ; i++ ){
        cin >> id >> age ; 
        tmp->next = new St(id,age) ; 
        tmp = tmp->next ; 
        cin >> tmp->name ;  
    } 
    return head ; 
}
void show_stuinfo(struct St *head ) {
    struct St * tmp = head->next ; 
    printf("            Show Student message!\n") ; 
    printf("    ID                age               name \n") ; 
    for ( ; tmp !=  NULL ; tmp = tmp->next ) {
        printf("%6d %18d               %s\n",tmp->id,tmp->age,tmp->name) ; 
    }
}
struct St* getset(struct St *a , struct St *b  ) {
    struct St* res = a , *tmp1 , *tmp2 = b->next , *end = a->next ;
    int i , flag ; 
    while ( end->next != NULL ) { 
        end = end->next ; 
    }
    for ( ; tmp2 != NULL ; tmp2 = tmp2->next ){
        for ( i = 0 , flag = 0 , tmp1 = a->next ; i < len_a && tmp1 != NULL ; tmp1 = tmp1->next , i++ ) {
            if ( tmp1->id == tmp2->id ){
                flag = 1 ; 
                break  ; 
            }
        }
        if ( flag == 0  ){
            end->next = tmp2 ; 
            end = end->next ; 
            all++ ; 
        }
    }
    end->next = NULL ; 
    return res  ; 
}
int main() {
    struct St * head_a = new St(0,0) , * head_b  = new St(0,0) ;
    head_a = InitSt(head_a,len_a) ; 
    head_b = InitSt(head_b,len_b) ; 
    all = len_a ; 
    cout << "Before the operation" << endl ;
    cout << endl ; 
    cout << "The student message in A, the are " << len_a << " students at all" << endl ; 
    show_stuinfo(head_a) ; 
    cout << endl ; 
    cout << "The student message in B, the are " << len_b << " students at all" << endl ; 
    show_stuinfo(head_b) ; 
    cout << endl ; 
    struct St *res = getset(head_a,head_b) ; 
    cout << "After the operation" << endl ; 
    cout << "The student message in A and B, the are " << all << " students at all" << endl ; 
    show_stuinfo(res) ; 
    return 0 ; 
}