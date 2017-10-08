#include<iostream>
#include<vector>
using namespace std ; 

void merge(vector<int>&s,vector<int>&d,int l,int m, int r) ;
void merge_sort(vector<int> &arr ) ;
void mergepass(vector<int> &s, vector<int> &d , int step ) ;

void show_elem(vector<int> a) {
    for ( int i = 0 ; i < a.size() ; i++ ) 
        cout << a[i] << " " ; 
    cout << endl ; 
} 
void merge_sort(vector<int> &arr ) {
    int i = 1 , len = arr.size() ; 
    vector<int> tmp (len) ; 
    while ( i < len ) {
        mergepass(arr,tmp,i) ; 
        i *= 2 ;
        if ( i > len ) { 
            for ( int j = 0 ; j < len ; j++ ) 
                arr[j] = tmp[j] ;  
            return ; 
        } 
        mergepass(tmp,arr,i) ; 
        i *= 2 ; 
    }
}

void mergepass(vector<int> &s, vector<int> &d , int step ) {
    int i = 0 , len = s.size() ; 
    while ( i < len - step + 1 ) {  
        int tmp = min(len-1,i+2*step-1) ; 
        merge(s, d,i,i+step-1,tmp) ;
        i = 2*step + i ; 
    } 
    for ( int j = i ; j < len ; j++ ) 
        d[j] = s[j] ;  
} 

void merge(vector<int>&s,vector<int>&d,int l,int m, int r) {
    int i = l , j = m+1 , k = l ; 
    while ( i <= m && j <= r ) 
        d[k++] = (s[i]>s[j]) ? (s[j++]) : s[i++] ; 
    while ( i <= m ) 
        d[k++] = s[i++] ; 
    while ( j <= r ) 
        d[k++] = s[j++] ; 
}

int main(){
    int tmp[] = {5,8,2,0,6,9,1,3,7,4} ; 
    vector<int> arr (tmp,tmp+10) ; 
    cout << "Before merge sort:" << endl ; 
    show_elem(arr) ; 
    merge_sort(arr) ; 
    cout << "\nAfter merge sort:" << endl ; 
    show_elem(arr) ; 
    return 0 ;    
}