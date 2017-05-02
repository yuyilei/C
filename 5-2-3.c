#include<stdio.h>
#include<stdlib.h>
int main(int argc , char *argv[]){
    int i , k ; 
    FILE *fp1 , *fp2 , *fp3 ;
    char ch ; 
    if ( argc != 4 ){
        printf("The number of the argc is wrong!") ; 
        exit(0) ;
    }
    if ( (fp1 = fopen(argv[1],"rt")) == NULL){
        printf("Can not open the source file1\n") ; 
        exit(0) ;
    }
    if ( (fp2 = fopen(argv[2],"rt")) == NULL){
        printf("Can not open the source file2\n") ;
        exit(0) ;
    }
    if ( (fp3 = fopen(argv[3],"wt"))== NULL ){
        printf("Can not open the destination file\n") ;
        exit(0) ;
    }
    while (!feof(fp1)){
        fputc(fgetc(fp1),fp3) ;
    }
    fclose(fp1) ; 
    while (!feof(fp2)){
        fputc(fgetc(fp2),fp3) ; 
    }
    fclose(fp2) ;
    fclose(fp3) ;
    if ((fp3 = fopen(argv[3],"rt")) == NULL){
        printf("Can not open the read file\n") ; 
        exit(0) ; 
    }
    while (!feof(fp3)){
        fscanf(fp3,"%c",&ch) ; 
        printf("%c",ch) ; 
    }
    fclose(fp3) ; 
    return 0 ; 
}
