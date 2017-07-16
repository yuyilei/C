#include<stdio.h>
#include<math.h>
int main() {
    float n , x , i , temp , y , tmp = 1  , res = 0 , one = 1 , a = 1 ; 
    float e , real ; 
    scanf("%f%f",&x,&e) ; 
    real = sin(x) ; 
    printf("%.10f\n",real) ; 
    y = x ; 
    do {
        temp = fabs(real-res) ; 
        res += ((a)*y/tmp ); 
        tmp *= (one+1)*(one+2) ; 
        one += 2 ; 
        a *= (-1) ; 
        y *= (x*x)  ; 
    } while ( temp >= e ) ; 
    printf("%.10f",res) ; 
    return 0 ; 
}
