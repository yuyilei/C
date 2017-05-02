#include<stdio.h>
#include<stdlib.h>
int main( int argc , char *argv[]){
    int k = 2 , i ; 
    char ch ; 
    FILE *fp ; 
    if ( argc != 2 ){
        printf("The numer of argc is wrong!\n") ; 
        exit(0) ;
    }
    if (( fp = fopen(argv[1],"rt")) == NULL){
        printf("Can not open the file!") ;
        exit(0) ;
    }
    printf("1 ") ; 
    for ( ; !feof(fp) ; ){
        ch = fgetc(fp) ; 
        printf("%c",ch) ; 
        if ( ch == '\n'){
            printf("%d ",k++) ;
        }
    }
    fclose(fp) ;
    return 0 ; 
}
