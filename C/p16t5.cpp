#include<iostream>
using namespace std ;

int main() {
    for ( int n = 1 ; ; n++ ) {
        if ( n % 2013 == 0 ) {
            cout << "至少 " << n << " 个1组成的整数能被 2013 整除." << endl ; 
            break ; 
        }
    }
    return 0 ; 
}