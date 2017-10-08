#include<iostream>
#include<vector>
using namespace std ; 

void show_elem(vector<int> a) {
    for ( int i = 0 ; i < a.size() ; i++ ) 
        cout << a[i] << " " ; 
    cout << endl ; 
}

void Merge(vector<int> &arr, int l , int m , int r , vector<int> temp ){
    int i , j , k = 0 ;
    for ( i = l , j = m + 1 ; i <= m && j <= r ; ) {
        if ( arr[i] < arr[j] ) {
            temp[k++] = arr[i++] ; 
        }
        else {
            temp[k++] = arr[j++] ; 
        }
    }
    while ( i <= m ) 
        temp[k++] = arr[i++] ;
    while ( j <= r ) 
        temp[k++] = arr[j++] ; 
    k = 0 ; 
    while ( l <= r ) 
        arr[l++] = temp[k++] ; 
}

void Msort(vector<int> &arr, int l, int r, vector<int> temp ) {
    if ( l < r ) {
        int m = (l+r) / 2 ; 
        Msort(arr,l,m,temp) ; 
        Msort(arr,m+1,r,temp) ; 
        Merge(arr,l,m,r,temp) ; 
    }
}

void sort(vector<int> &arr ) {
    vector<int> temp (10) ; 
    Msort(arr,0,arr.size()-1,temp) ; 
} 


int main(){
    int tmp[] = {5,8,2,0,6,9,1,3,7,4} ; 
    vector<int> arr (tmp,tmp+10) ; 
    cout << "Before merge sort:" << endl ; 
    show_elem(arr) ; 
    sort(arr) ; 
    cout << "\nAfter merge sort:" << endl ; 
    show_elem(arr) ; 
    return 0 ;    
}