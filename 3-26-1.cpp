#include<iostream>
#include<string>
using namespace std ;

bool checkpalindrome(string s , int first ,int last ) ; 
bool checkpalindrome(string s , int first , int last) {
    if ( first >= last ){
    
        return true ;
    }
    else {
    
        return (s[first]==s[last]&& checkpalindrome(s,first+1,last-1)) ;
    }
}

int main () {

    string s ;
    cin >> s ;
    cout << checkpalindrome(s,0,s.length()-1) ; 
    return 0 ; 

}
