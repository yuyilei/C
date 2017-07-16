 #include<stdio.h>

int main(){
   int a1[12] = {31 ,28 ,31 ,30 ,31 ,30 ,31 ,31 ,30 , 31 ,30 ,31 } ;
   int a2[12] = {31, 29 ,31, 30 ,31, 30 ,31 ,31 ,30 , 31 ,30 ,31 };
   int year ,month ,day ;
   int  i ,n ;
   int sum  =0 ; 

   printf("输入年月日\n");
   scanf("%d %d %d" ,&year ,&month ,&day );
   // year = 2016;
   // month = 11;
   // day = 11;

   if (year / 4 == 0) {
      if (year / 100 == 0) {
         if (year /400 == 0) {
             for (i =0 , n=0; i<month -1;i++)
                  n += a2[i] ;
            sum =  n + day ;
         }
         else {
              for ( i=  0 ,n =0 ; i<month -1 ; i ++)
                  n += a1 [i] ;
            sum  = n + day ;
         }
      }
         else {
              for (i =0 , n=0; i<month -1;i++)                                 
                              n += a2[i] ;                                                                                   
               sum =  n + day ;      
         }
   }
    else {
         for (i =0 , n=0; i<month -1;i++)                             
                      n += a1[i] ;                                                                               
           sum =  n + day ;       
    }
     
    printf( "这一天是这一年的第%d天\n" , sum );

    return  0 ;

}
