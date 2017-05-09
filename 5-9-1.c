#include<stdio.h>
int main() {
    char *color[] = {"red","yellow","blue","white","black"} ; 
    int i , j , k , m = 1 ; 
    for ( i = 0 ; i < 5 ; i++ ){
        for ( j = i + 1 ; j < 5 ; j++ ){
            for ( k = j + 1 ;  k < 5 ; k++ ){
                printf("%d : %s %s %s\n",m++,color[i],color[j],color[k]) ; 
            }
        }
    }
    return 0 ; 
}
