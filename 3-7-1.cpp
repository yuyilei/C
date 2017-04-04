#include<iostream>
using namespace std ;

int tell(int year)  ;
int firstspace(int year) ;
void gethelp( int help[12] ,int year ) ;
void getmonth(int month[12]) ;
void getspace(int space[12], int help[12],int year) ;
void firstline() ;
void res(int start ,int space[12] ,int help[13] ,int month[12]) ; 

int main () {

    int i ; 
    int j ;
    int k ;
    int space[12] ;
    int help[12] ;
    int t ; 
    int month[12] ;
    int year ;

    cin >> year ;

    gethelp( help , year ) ;
    getmonth(month) ;
    getspace(space,help,year) ;

    cout <<"                            "<<year<<"年日历"<<"                                "<<  endl ;
    cout << endl ;
    cout <<"                                         作者:余依蕾             " << endl; 
    cout << endl ;

    cout << "        一月份      "<<"    " << "        二月份      " <<"    "<< "        三月份       "<<  endl ; 
    cout << endl ; 
    res(0,space,help,month) ;
    cout << "        四月份      "<<"    " << "        五月份      " <<"    "<< "        六月份       "<<  endl ;
    cout << endl ;   
    res(3,space,help,month) ;
    cout << "        七月份      "<<"    " << "        八月份      " <<"    "<< "        九月份       "<<  endl ;
    cout << endl ;   
    res(6,space,help,month) ;
    cout << "        十月份      "<<"    " << "        十一月      " <<"    "<< "        十二月       "<<  endl ;
    cout << endl ;   
    res(9,space,help,month) ; 
    
    return 0 ;

}

void getmonth( int month[12] ){

    int i ;
    for ( i = 0 ; i < 12 ;i++ ){
    
        month[i] = 1 ;
    }
}

void gethelp( int help[12] ,int year  ) {

    int i ;

    for ( i = 0 ; i < 12 ; i++ ){
    
        if ( i == 0 || i == 2 || i == 4 || i == 6 || i == 7 || i == 9 || i == 11) 
            help[i] = 31 ;
        else if ( i == 1 )
            help[i] = 28 ;
        else 
            help[i] = 30 ;
    }

    if (tell(year) == 1) {
        help[1] = 29 ;
    }

}

void getspace(int space[12] , int help[12] , int year ){
    
    int i ;

    space[0] = firstspace(year) ;

    for ( i = 0 ; i < 11 ; i++ ) {
    
        space[i+1] = ( space[i] + help[i]) % 7 ;
    }

}

void firstline() {

    int i ;

    for ( i = 0 ; i < 3 ; i++ ) {
    
        cout <<"日 一 二 三 四 五 六    " ; 
    }
        cout <<" " << endl ; 

}
   

void res(int start ,  int space[12] ,int help[12] , int month[12] ){

    int i , j  , k , t ;

    firstline() ;

    for ( j = 0 ; j < 6 ; j++) {
    
        for ( i = start ; i < 3 + start ; i++) {
        
            for ( t = 0 ; t < space[i] ; t++ ){
            
                cout << "   " ;
            } 

            for ( t < space[i] ; t < 7 ; t++) {
            
                if (month[i] <= help[i] ){
                
                    if ( month[i] < 10 )
                        cout << " " << month[i]++ << " " ;
                    else 
                        cout << month[i]++ << " " ;
                }
                else {
                
                    cout << "   " ;
                }
                space[i] = 0 ;
            }

            cout << "   " ;
        }

        cout << " " << endl ;
    }

}

int tell(int  year ) {

    if ( year % 4 == 0 ){
    
        if ( year % 100 != 0)
            return 1 ;

        else if ( year % 400 == 0)
            return 1 ;
        else 
            return 0 ;
    }

    return 0 ;

    
}

int firstspace( int y ){

    int d = 1 ;
    int m = 13 ;
    y-- ; 
    int i = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;  
    
    i = ( i + 1 ) % 7 ;
       
    return i ;

}

