#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random2() {
    time_t t;
    srand((unsigned) time(&t));
    int number = rand() % 9 ;
    return number ; 
}
int main() {
    int i , j , num , a[9][9] = {0} , x , y , tx ,ty , k ; 
    int dir[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}} ;
    for ( i = 0 ; i < 10 ; ){
        x = random2() ;
        y = random2() ;
        if ( x != 0 && y != 0 && a[x][y] != 9 ){
            a[x][y] = 9 ; 
            i++ ; 
        }
    }
    for ( i = 0 ; i < 9 ; i++ ){
        for ( j = 0 ; j < 9 ; j++ ){
            if (a[i][j] != 9 ){
                for ( k = 0 ;  k < 8 ; k++) {
                    tx = i + dir[k][0] ; 
                    ty = j + dir[k][1] ; 
                    if ( tx >= 0 && ty >= 0 && tx < 9 && ty < 9 && a[tx][ty] == 9 ){
                        a[i][j]++ ;
                    }
                }
            } 
        }
    }
    for ( i = 0 ; i < 9 ; i++) {
        for ( j = 0 ; j < 9 ; j++){
            printf("%d ",a[i][j]) ;
        }
        printf("\n") ; 
    }
}
