#include<iostream>
#include<vector>
using namespace std ; 

void show_elem(vector<int> a) {
    for ( int i = 0 ; i < a.size() ; i++ ) 
        cout << a[i] << " " ; 
    cout << endl ; 
} 

void quicksort(vector<int> &arr, int left , int right ) {
    if ( left < right ) {
        int l = left , r = right , tmp = arr[left] ; 
        while ( l != r ) {
            while ( l < r && arr[r] >= tmp ) 
                r-- ; 
            arr[l] = arr[r] ; 
            while ( l < r && arr[l] <= tmp ) 
                l++ ; 
            arr[r] = arr[l] ; 
        }  
        arr[l] = tmp ; 
        quicksort(arr,left,l-1) ; // 将两边的子序列排序   
        quicksort(arr,l+1,right) ; 
    }
}

int main(){
    int tmp[] = {5,8,2,0,6,9,1,3,7,4} ; 
    vector<int> arr (tmp,tmp+10) ; 
    cout << "Before quick sort:" << endl ; 
    show_elem(arr) ; 
    quicksort(arr,0,arr.size()-1) ; 
    cout << "After quick sort:" << endl ; 
    show_elem(arr) ; 
    return 0 ; 
}