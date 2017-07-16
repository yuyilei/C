#include<stdio.h>
#include<time.h>

char data_flie[] = "datatime.dat";

void get_data (){
 
  FILE *fp;
  if ((fp = fopen (data_flie,"r")) == NULL )
    printf("本程序第一次执行\n");
   else {
     char mood[128];
     int year , month , day , h ,m  ,s ;
     fscanf (fp , "%s %d %d %d %d %d %d ", mood ,&year ,&month ,&day ,&h,&m,&s );
     printf("上一次运行的时间是%d年%d月%d日%d时%d分%d秒。心情是%s",year,month,day,h,m,s,mood);
    fclose(fp);
}
}
 
void put_data(){
  FILE *fp;
  char mood[128];
  time_t current = time (NULL);
  struct tm *timer = localtime(&current);
    if  (( fp = fopen (data_flie ,"r")) == NULL )
   printf("打开文件失败\n");
    else {
     fprintf( fp ," %d %d %d %d %d %d %s ", 
     timer->tm_year+1900 , timer->tm_mon+1, timer->tm_mday,
     timer->tm_hour, timer->tm_min,timer->tm_sec, mood );
   fclose (fp);
 }
}

int main (){

 get_data();
 put_data();

return 0;
}


