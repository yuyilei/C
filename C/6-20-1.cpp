#include<iostream>
using namespace std ; 
int main() {
    int n , i ;
    unsigned long sum = 1 ; 
    cin >> n ; 
    for ( i = 1 ; i <= n ; i ++ ){
        sum *= i ; 
        if ( (signed)sum < 0   ){
            cout << "warning!" << endl ; 
            return 0 ; 
        }
    }
    cout << sum << endl ; 
    return 0 ; 
}
