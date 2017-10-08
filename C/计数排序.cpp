#include<iostream>
#include<vector>
using namespace std ; 

void show_elem(vector<int> a) {
    for ( int i = 0 ; i < a.size() ; i++ ) 
        cout << a[i] << " " ; 
    cout << endl ; 
} 

void countsort(vector<int> &arr ) {
    int len = arr.size() , minn = arr[0] , maxx = arr[0] , i ; 
    vector<int> temp (len) ; 
    for ( i = 1 ; i < len ; i++ ) {
        maxx = max(maxx,arr[i]) ; 
        minn = min(minn,arr[i]) ;
    } 
    vector<int> tmp(maxx-minn+1,0) ; 
    for ( i = 0 ; i < len ; i++ ) 
        tmp[arr[i]-minn]++ ; 
    for ( i = 1 ; i < tmp.size() ; i++ ) 
        tmp[i] += tmp[i-1] ; 
    for ( i = len-1 ; i>=0 ; i-- ) {
        temp[tmp[arr[i]-minn]-1] = arr[i] ; 
        tmp[arr[i]-minn]-- ; 
    }
    arr.assign(temp.begin(),temp.end()) ;  
}
int main(){
    int tmp[] = {5,8,2,10,6,9,1,3,7,4,4,-1} ; 
    vector<int> arr (tmp,tmp+12) ; 
    cout << "Before count sort:" << endl ; 
    show_elem(arr) ; 
    countsort(arr) ; 
    cout << "After count sort:" << endl ; 
    show_elem(arr) ; 
    return 0 ; 
}