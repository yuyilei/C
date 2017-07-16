#include<cstdio>
#include<string>
#include<iostream>

using namespace std ;

int main() {

    string a[4] = {"华","中","师","大"}; 

    for ( int i = 3 ; i >= 0 ; i-- ){
    
        cout << a[i]  ;
    }

    return 0 ;
}
