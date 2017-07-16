#include<stdio.h>
#include<stdlib.h>
#define KEY 0xFA 
int main( int argc , char *argv[] ){
    FILE *fpr , *fpw ; 
    char ch , k = (char)KEY ; 
    fpr = fopen(argv[1],"rb") ; 
    if ( fpr == NULL ){
        exit(0) ; 
    }
    fpw = fopen(argv[1],"rb+") ; // 不是wb , rb+从头开始写入 
    if ( fpw == NULL ){
        exit(0) ; 
    }
    while ( (ch=fgetc(fpr)) != EOF){
        fputc(ch^k,fpw) ; 
        k = (*argv[2]=='+')? ch : ch^k ; 
    }
    fclose(fpr) ; 
    fclose(fpw) ; 
    return 0 ; 
}
