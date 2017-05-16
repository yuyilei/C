#include<stdio.h>
int main() {
    int year , mon , flag = 0 , month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31} ; 
    scanf("%d%d",&year,&mon) ; 
    if ( (( year % 4 ) == 0 && (year % 100) != 0) || (( year % 400 ) == 0 ) ){
        flag = 1 ; 
    }
    if ((mon==2) && (flag==1)){
        printf("29\n") ; 
    }
    else {
        printf("%d\n",month[mon]) ; 
    }
    return 0 ; 
}
