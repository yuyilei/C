#include<stdio.h>
int getres(int x , int y ){
    int res ; 
    if ( y == 0 ){
        res =  1 ; 
    }
    else {
        res = x * getres(x,y-1)  ;
    }
    return res ; 
}
int main() {
    int x , k , sum ; 
    scanf("%d%d",&x,&k) ; 
    sum = getres(x,k) ; 
    printf("%d\n",sum) ; 
    return 0 ; 
}
