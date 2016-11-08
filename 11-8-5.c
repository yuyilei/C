#include<stdio.h>
/*读取含有10个double型的元素的数组的所有元素值*/
int main(){
  double a[10];
  int i;
  FILE *fp ;
  if ((fp = fopen ("pi.bin" , "r")) == NULL)
      printf("打开文件失败\n");
    else 
     {
         fread (&a ,sizeof(double),10,fp);
         for (int i=0 ; i<10 ;i++)
             printf("a[%d]的值是%lf",i+1,a[i]);
         fclose (fp);
    }
    return 0 ;
}
