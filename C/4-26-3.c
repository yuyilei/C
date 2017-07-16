#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random2() {
    time_t t;
    srand((unsigned)time(&t));
    int number = rand() % 10 ;
    return number ; 
}
int main() {
    int i , j , num , a[11][11] = {0} , x , y , tx ,ty , k ; 
    int dir[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}} ;
    for ( i = 0 ; i < 10 ; ){
        x = random2() ;
        y = random2() ;
        if ( x != 0 && y != 0 && a[x][y] != 9 ){
            a[x][y] = 9 ; 
            i++ ; 
        }
    }
    for ( i = 0 ; i < 11 ; i++ ){
        for ( j = 0 ; j < 11 ; j++ ){
            if (a[i][j] != 9 ){
                for ( k = 0 ;  k < 8 ; k++) {
                    tx = i + dir[k][0] ; 
                    ty = j + dir[k][1] ; 
                    if ( tx >= 0 && ty >= 0 && tx < 11  && ty < 11  && a[tx][ty] == 9 ){
                        a[i][j]++ ;
                    }
                }
            } 
        }
    }
    for ( i = 0 ; i < 11 ; i++) {
        for ( j = 0 ; j < 11 ; j++){
            if ( a[i][j] == 9 ){
                printf("* ") ; 
            }
            else {
                printf("%d ",a[i][j]) ;
            }
        }
        printf("\n") ; 
    }
    return 0 ; 
}
