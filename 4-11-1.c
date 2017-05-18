#include<stdio.h>
#include<string.h>
void alltrim( char *psstr ,char *psdstr);
void  main(){
    char *pstr , str[20] ;
    pstr = "    Happy birthday !   " ;
    printf("before alltrim : %s \n" , pstr) ;
    alltrim(pstr,str) ;
    printf("after alltrim : %s \n", str) ;
}
void alltrim( char *pstr , char *pdstr) {
    char *pstart , *pend ;
    pstart = pstr ;
    while ( *pstart == ' ') {
        pstart++ ;
    }
    pend = pstart + strlen(pstr) - 1 ;
    while ( *pend == ' ') {
        pend--; 
    }
    while ( pstart <= pend ){
        *pdstr++ = *pstart++ ;
    }
    *pdstr = '\0' ;
}
