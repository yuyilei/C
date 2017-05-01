#include<stdio.h>
#include<stdlib.h>
int main(int argc , char *argv[] ){
    FILE *fp1 , *fp2 ; 
    char ch ; 
    if ( argc != 2 ){
        printf("The number of arguments not correct\n\n") ; 
        exit(0) ; 
    }
    if ( (fp1 = fopen(argv[1] ,"wt")) == NULL){
        printf("Can not open the file\n") ; 
        exit(0) ; 
    }
    for ( ; ( ch = getchar()) != '@' ; ){
        fputc(ch,fp1) ; 
    }
    fclose(fp1) ; 
    fp2 = fopen(argv[1],"rt") ;
    for ( ; ( ch = getchar()) != EOF ; ){
        putchar(ch) ; 
    }
    fclose(fp2) ;
    return 0 ;
}
