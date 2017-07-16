#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
int main(){
    FILE *fp ; 
    short i , a[10] = {0,1,2,3,4,5,6,7,8,9} ; 
    fp = fopen("wang.dat","wb") ;
    if ( fp == NULL){
        printf("can not create file: wang.dat") ; 
        exit(0) ; 
    }
    fwrite(a,sizeof(short),10,fp) ; 
    fclose(fp) ;
    fp = fopen("wang.dat","rb") ; 
    if ( fp == NULL ){
        printf("can not open file : wang.dat\n") ; 
        exit(0) ; 
    }
    memset(a,0,10*sizeof(short)) ; 
    fread(a,sizeof(short),10,fp) ; 
    fclose(fp) ;
    for ( i = 0 ; i < 10 ;i++){
        printf("%d ",a[i]) ;
    }
    return 0 ;
}
