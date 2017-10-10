#include<iostream>
#include<cstdio>
using namespace std ; 
typedef int Item ; 
#define key(A) (A) 
#define less(A,B) (key(A) < key(B))  
#define exch(A,B) { Item t = A ; A = B ; B = t ; } 
#define compexch(A,B) if (less(B,A)) exch(A,B) 

void show_elem(int a[] , int num ) {
    for ( int i = 0 ; i < num ; i++ ) 
        cout << a[i] << " " ; 
    cout << endl ; 
}
void insertion(Item a[] , int l , int r ) {
    for ( int i = r - 1 ; i > l ; i-- ) 
        compexch(a[i-1],a[i]) ; // 这个循环将最小值放到第一位
    for ( int i = l+2 ; i < r ; i++ ) {
        int j = i ; 
        Item v = a[i] ; 
        while (less(v,a[j-1])) { //从后往前遍历，遇到比当前值大的值，后移，反之，跳出循环 
            a[j] = a[j-1] ;
            j-- ; 
        } 
        a[j] = v ; 
    }
}

int main() {
    int a[] = {5,8,2,0,6,9,1,3,7,4} ;  
    cout << "Before insertion sort : "  << endl ; 
    show_elem(a,10) ;
    insertion(a,0,10) ; 
    cout << "After insertion sort : " << endl ; 
    show_elem(a,10) ; 
    return 0 ; 
}