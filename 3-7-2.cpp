#include<iostream>
// 把2017的农历写死 ,唉 QAQ!

using namespace std ;

int tell(int year)  ;
int firstspace(int year) ;
void gethelp( int help[12] ,int year ) ;
void getmonth(int month[12],int month1[12]) ;
void getspace(int space[12], int help[12],int year) ;
void firstline() ;
void res(int year ,int start ,int space[12] ,int help[13] ,int month[12],int month1[12]) ; 

string lunar[30] = {"初一","初二","初三","初四","初五","初六","初七","初八","初九","初十" ,"十一","十二","十三","十四","十五","十六","十七" ,"十八","十九","二十","廿一","廿二","廿三","廿四","廿五","廿六","廿七","廿八","廿九" ,"三十"} ;

int lun[12] = {3,4,3,4,5,6,7,9,10,11,12,13} ;
int lun1[12] = {29,28,29,28,29,28,28,29,28,29,28,29} ;

int main () {

    int i ; 
    int j ;
    int k ;
    int space[12] ;
    int help[12] ;
    int t ; 
    int month[12] ;
    int year ;
    int month1[12] ;

    cin >> year ;

//    for ( i = 0 ; i < 30 ; i++) 
  //      cout << lunar[i] << endl ;

    gethelp( help , year ) ;
    getmonth(month,month1) ;
    getspace(space,help,year) ;


    cout <<"                                      "<<year<<"年日历"<<"                                      "<<  endl ;
    cout << endl ;

    cout << "              一月份              "<<"    " << "                二月份               " <<"    "<< "               三月份                "<<  endl ; 
    cout << endl ; 
    res(year,0,space,help,month,month1) ;
    cout << "             四月份               "<<"    " << "                五月份               " <<"    "<< "               六月份                "<<  endl ;
    cout << endl ;   
    res(year,3,space,help,month,month1) ;
    cout << "             七月份               "<<"    " << "                八月份               " <<"    "<< "               九月份                "<<  endl ;
    cout << endl ;   
    res(year,6,space,help,month,month1) ;
    cout << "             十月份               "<<"    " << "                十一月               " <<"    "<< "               十二月                "<<  endl ;
    cout << endl ;   
    res(year,9,space,help,month,month1) ;


    
    return 0 ;

}

void getmonth( int month[12] , int month1[12] ){

    int i ;
    for ( i = 0 ; i < 12 ;i++ ){
    
        month[i] = 1 ;
        month1[i] = month[i] ;
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
    
        cout <<"日   一   二   三   四   五   六        " ; 
    }
        cout <<" " << endl ; 

}
   

void res(int year ,int start ,  int space[12] ,int help[12] , int month[12] ,int month1[12] ){

    int i , j  , k , t ;
    int w ;
    int space1[12] ;

    for ( i = 0 ; i < 12 ; i++) 
        space1[i] = space[i] ;

    firstline() ;

    for ( j = 0 ; j < 6 ; j++) {
   
        for ( i = start ; i < 3 + start ; i++) {
        
            for ( t = 0 ; t < space[i] ; t++ ){
            
                cout << "     " ;
            } 

            for ( t < space[i] ; t < 7 ; t++) {
            
                if (month[i] <= help[i] ){
                
                    if ( month[i] < 10 ) {
                        cout << " " << month[i]++ << "   " ;
                        }
                    else 
                        cout << month[i]++ << "   " ;
                }
                else {
                
                    cout << "     " ;
                }

                space[i] = 0 ;
            }

            cout << "     " ;
        }
 
        cout << " " << endl ;  

       if ( year == 2017 ) {
                
            i = i -3 ;
            int r = i ;
            for ( ; i < r + 3 ; i ++) {
            
            for ( t = 0 ; t < space1[i] ; t++ ) 
    
                cout << "     " ;

            for ( t = space1[i] ; t < 7 ; t++ ) {
            
                if ( month1[i]++ <= help[i] ) {

                    if ( lun[i] > lun1[i] ) {
                    
                        lun[i] = 0 ;
                    }
               
                    cout <<lunar[lun[i]++]<<" "; 
                }

                else {
                
                    cout << "     " ; 
                }
                space1[i] = 0 ;

             }   cout << "     " ;
            
            }

            cout << endl ; 
    }
       
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

